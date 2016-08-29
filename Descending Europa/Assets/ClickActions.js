#pragma strict

var rover : GameObject;
var action : String;
private var lock : boolean = true;
private var rumble : boolean = false;
private var nextShake : float  = 0;
private var shakeRate : float =  0.05;
private var rovercam : GameObject;
private var rovercamprobe : GameObject;
private var rovercamactual : GameObject;
var state : State;

private var distFront : float;

function Start () {
	rover = GameObject.Find("roverbase");
	rovercam = GameObject.Find("rcambase");
	rovercamprobe = GameObject.Find("RoverCamProbe");
	rovercamactual = GameObject.Find("RoverCam");
	if (GameObject.Find("level")) {
		state = GameObject.Find("level").GetComponent(State);
		iTween.MoveTo(rover, {"y": -1.0, "time": 7.0, "easeType": "linear", "oncomplete": "CanAction", "oncompletetarget": gameObject});
	}
}

function Update () {
    if (Time.time > nextShake && rumble) {
		nextShake = Time.time + shakeRate;
		Rumble();
    }

    if (Input.GetKey ("escape")) {
		Application.LoadLevel("menu");
	}
}


function OnMouseUpAsButton() {
	if (action == "startgame") {
		Application.LoadLevel("main");
	}

	if (action == "quit") {
		Application.Quit();
	}

	if (lock || state.ending) {
		return;
	}
	if (action) {
		GameObject.Find("act").transform.position.x = gameObject.transform.position.x;
		GameObject.Find("act").transform.position.y = gameObject.transform.position.y;
		lock = true;
		this.SendMessage(action);
	}
}

function MoveFwd() {
		Debug.Log("Trying to move forward");
	    var hit : RaycastHit;
	    var distonze : float = 5.0;

		if (Physics.Linecast (rovercamactual.transform.position, rovercamprobe.transform.position, hit)) {
			distonze = hit.distance;
		}
	Debug.Log(distonze);
	if (distonze > 3.0) {
		Debug.Log("Moving forward");
		StartRumble();
		iTween.MoveBy(rover, {"z": 4.0, "time": 2.0, "easeType": "linear", "oncomplete": "CanAction", "oncompletetarget": gameObject});
	} else {
		CanAction();
	}
}

function MoveBwd() {
	//Debug.Log("Moving backward");
	//iTween.MoveBy(rover, {"z": -4.0, "time": 2.0, "easeType": "linear", "oncomplete": "CanAction", "oncompletetarget": gameObject});
}

function RotLeft() {
	Debug.Log("Rotate left");
	iTween.RotateBy(rover, {"y": -0.25, "time": 2.0, "easeType": "linear", "oncomplete": "CanAction", "oncompletetarget": gameObject});
}

function RotRight() {
	Debug.Log("Rotate right");
	iTween.RotateBy(rover, {"y": 0.25, "time": 2.0, "easeType": "linear", "oncomplete": "CanAction", "oncompletetarget": gameObject});
}

function CanAction() {
	GameObject.Find("act").transform.position.x = 100;
	Debug.Log("Stopping rumble");
	StopRumble();
	lock = false;
}

function StartRumble() {
	rumble = true;
}

function StopRumble() {
	rumble = false;
	rovercam.transform.localPosition = Vector3(0, 0, 0);
}

function Rumble() {
	rovercam.transform.localPosition = Vector3(0, 0, 0) + Random.insideUnitSphere * 0.02;
}

function Poke() {
	iTween.PunchPosition(GameObject.Find("robitarm"), {"y": -0.7, "time": 2.0, "easeType": "linear", "oncomplete": "CanAction", "oncompletetarget": gameObject});
}

function IsUnBlocked() {
	var fwd: Vector3 = rovercamprobe.transform.TransformDirection(Vector3.forward);
	var hit: RaycastHit;
	var ray : Ray = Ray(rovercamprobe.transform.position, fwd);
			
	if (Physics.Raycast(ray, hit, 3.0)) {
				Debug.Log("Blocked");
		Debug.Log(hit.distance);
		GameObject.Find("debug").transform.position = hit.point;
		if (hit.distance < 2.2) {
			return false;
		}
	} else {
		return true;
	}
}