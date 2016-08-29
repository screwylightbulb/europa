#pragma strict

private var rover : GameObject;
var show : String;
var state : State;

private var nextFire : float  = 0;
private var fireRate : float =  0.05;

function Start () {
	state = GameObject.Find("level").GetComponent(State);
	rover = GameObject.Find("roverbase");
}

function Update() {
	var txt : String = "";
	if (show == "dir") {
		txt = "vct: " + rover.transform.eulerAngles.y;
	}
	if (show == "x") {
		txt = "plx: " + (rover.transform.position.x + 32.112);
	}
	if (show == "z") {
		txt = "ply: " + (rover.transform.position.z + 223.335);
	}
	if (show == "tmp") {
		txt = "tmp: -8c";
	}

    if (Time.time > nextFire) {
		nextFire = Time.time + fireRate;
		Rand();
    }


	if (show == "rad") {
		if (state.key1 == 180 && state.key2 == 90) {
			var distnz = Vector3.Distance(GameObject.Find("roverbase").transform.position, GameObject.Find("chbutton").transform.position);
			var rads = 48.22 - distnz;
			txt = "rad: " + (rads + rnum);
		} else {
			txt = "rad: 0.0";
		}
	}
	GetComponent.<TextMesh>().text = txt;
}

private var rnum : float =	 0.0;

function Rand() {
	rnum = Random.value;
	rnum = Mathf.Sin(Time.time);
}

