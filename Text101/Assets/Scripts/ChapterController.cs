﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ChapterController : MonoBehaviour {

	public Text text;
	

	// Use this for initialization
	void Start () {

		text.text = "Dungeon Crawler";
	
	}
	
	// Update is called once per frame
	void Update () {

		switch (TextController.myState) {
			
		case TextController.States.intro:
			text.text = "Dungeon Crawler";
			break;
			
		case TextController.States.gully:
			text.text = "The Gully";
			break;

		default:
			text.text = "Dungeon Entrance";
			break;
		}
	
	}
}
