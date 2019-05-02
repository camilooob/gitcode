//
//  ViewController.swift
//  dice
//
//  Created by Camilo on 5/2/19.
//  Copyright © 2019 cabadev. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    //Creamos los dados
    var randomIndexDice1: Int = 0
    var randomIndexDice2: Int = 0
    
    //Generamos Array con las imagenes de los dados
    
    let diceArray = ["dice1", "dice2", "dice3", "dice4", "dice5", "dice6"]
    
// Link imagenes de los dos dados en pantalla
    @IBOutlet weak var diceImagen1: UIImageView!
    @IBOutlet weak var diceImagen2: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        actualizaDados()
    }
// Link boton Roll
    @IBAction func rollBotonPress(_ sender: UIButton) {
     
     actualizaDados()
    }

    func actualizaDados(){
        //Generamos numero aleatoreo en cada dado cuando presiona boton
        randomIndexDice1 = Int(arc4random_uniform(6))
        randomIndexDice2 = Int(arc4random_uniform(6))
        
        //Imprimimos en Consola los dados
        print(randomIndexDice1)
        print(randomIndexDice2)
        //Cambiamos la imagen al azar
        diceImagen1.image = UIImage(named: diceArray[randomIndexDice1])
        diceImagen2.image = UIImage(named: diceArray[randomIndexDice2])
    }

    override func motionEnded(_ motion: UIEvent.EventSubtype, with event: UIEvent?) {
      actualizaDados()
    }
    
    

}
    
    


