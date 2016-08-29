#pragma strict

var state : State;

function Start () {
	state = GameObject.Find("level").GetComponent(State);
}

function Update () {

}

var action : String;

function OnCollisionEnter(other: Collision) {
	if (other.gameObject.name == "pokey") {

		state.SendMessage(action);

	}
}

