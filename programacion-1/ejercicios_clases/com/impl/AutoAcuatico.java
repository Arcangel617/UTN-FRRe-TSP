package com.impl;

import com.Auto;

public class AutoAcuatico extends Auto {

	private int cantidadOxigeno = 5;

	public int getCantidadOxigeno(){
		return cantidadOxigeno;
	}
	
	@Override
	public void encenderse(){
		super.setEstado("Arrancando Auto en el agua...");
	}
}
