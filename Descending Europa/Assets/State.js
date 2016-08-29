#pragma strict

var ending : boolean = false;

function Start () {
	key1 = 0;
	key2 = 0;
}

function Update() {
	if (key1 == 180 && key2 == 90) {
		GameObject.Find("zzbutton").transform.localPosition.z = -0.0131;
	} else {
		GameObject.Find("zzbutton").transform.localPosition.z = 200;
	}
}

var door1open : boolean = false;

function door1() {
	if (door1open) {
		return;
	}
	iTween.MoveBy(GameObject.Find("door1"), {"z": -4.0, "time": 2.0, "easeType": "linear"});
	door1open = true;
	Fizz();
}

var hdooropen : boolean = false;

function hdoorbutton() {
	if (hdooropen) {
		return;
	}
	iTween.MoveBy(GameObject.Find("rdoor"), {"y": -4.0, "time": 2.0, "easeType": "linear"});
	hdooropen = true;
	Fizz();
}

function finaldoor() {
	if (finaltrigger) {
		iTween.MoveBy(GameObject.Find("chdoor"), {"y": -4.0, "time": 2.0, "easeType": "linear"});
		Fizz();
	}
}


function bridgepos1() {
	iTween.MoveTo(GameObject.Find("bridge"), {"z": 42.28, "time": 5.0, "easeType": "linear"});
	Fizz();
}

function bridgepos2() {
	iTween.MoveTo(GameObject.Find("bridge"), {"z": 66.28, "time": 5.0, "easeType": "linear"});
	Fizz();
}

function finalscene() {
	ending = true;
	iTween.MoveTo(GameObject.Find("cfoo"), {"y": 0.0, "time": 6.0, "easeType": "linear"});
	Fizz();
	yield WaitForSeconds(2);
	Fizz();
	yield WaitForSeconds(1);
	Fizz();
	yield WaitForSeconds(1);
	GameObject.Find("vhs").transform.localPosition.y = 0;
	yield WaitForSeconds(2);
	GameObject.Find("nosig").transform.localPosition.x = 0;
	yield WaitForSeconds(5);
	Application.LoadLevel("menu");
}

var finaltrigger : boolean = false;

function bridgepos3() {
	iTween.MoveTo(GameObject.Find("bridge"), {"z": 50.28, "time": 5.0, "easeType": "linear"});
	Fizz();
	finaltrigger = true;
	GameObject.Find("fdoorbutton").transform.localPosition.y = 0;
}

var key1 : float = 0;
var key2 : float = 0;

var keyrotating : boolean = false;

function key1rot() {
	if (keyrotating) {
		return;
	}
	keyrotating = true;
	key1 = key1 + 45;
	iTween.RotateBy(GameObject.Find("key1"), {"x": (1.0/8), "time": 2.0, "easeType": "linear", "oncomplete": "CheckKey1", "oncompletetarget": gameObject});
	if (key1 == 360) {
		key1 = 0;
	}
}

function key2rot() {
	if (keyrotating) {
		return;
	}
	keyrotating = true;
	key2 = key2 + 45;
	iTween.RotateBy(GameObject.Find("key2"), {"x": (1.0/8), "time": 2.0, "easeType": "linear", "oncomplete": "CheckKey2", "oncompletetarget": gameObject});
	if (key2 == 360) {
		key2 = 0;
	}
}

function CheckKey1() {
	if (key1 == 180) {
		GameObject.Find("key1active").transform.position.y = 0;
		Fizz();
	} else {
		GameObject.Find("key1active").transform.position.y = 100;
	}
	keyrotating = false;
}

function CheckKey2() {
	if (key2 == 90) {
		GameObject.Find("key2active").transform.position.y = 0;
		Fizz();
	} else {
		GameObject.Find("key2active").transform.position.y = 100;
	}
	keyrotating = false;
}


function Fizz() {
	GameObject.Find("vhs").transform.localPosition.y = 0;
	yield WaitForSeconds(0.5);
	GameObject.Find("vhs").transform.localPosition.y = 20;
}



