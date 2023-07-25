# CluckGuard - Automatic Chicken Coop Door

CluckGuard is an automated chicken coop door that is designed to open and close automatically based on sunrise and sunset. With this device, you will no longer have to worry about letting your chickens out in the morning or locking them up at night. It is easy to install and operate, making it a perfect solution for any chicken owner.

This project is still a work in progress! Check out the [wiki](https://github.com/itsdombo/CluckGuard/wiki) and the [changelog](changelog.md) to see updates.

## Demo Videos

In the current state of the project. The door is unable to hold up the door without a constant supply of the correct voltage. This can be solved either by:
1. Programming the Arduino to supply the correct voltage necessary to counteract the weight of the door.
2. Integrating a locking mechanism to hold the door in place in the open position.

For reasons of mechanical stress on the electrical components and longevity in the lifespan of the product, I have decided to go with the second option.

The next following week or two will be dedicated to prototyping and CAD design of the locking mechanism: A spring-locked wedge that is unlocked by the force of a servo (no bigger than an SG90).

Below are two videos demoing progress of the door.

https://github.com/itsdombo/CluckGuard/assets/31048418/dae68659-ef06-495b-bda8-897e3f5b6dd2

The video above showcases the first working demo of the chicken door. Without the calibrations, the door does not complete a full revolution under the load of the door, and overshoots when closing.

The door is designed so that a full rotation causes the door to fully lift; the circumference of the pulley equals the height displacement of the door. Hence, a nail in the wall and a stopper is all the pulley needs to stop the door from overshooting. This pulley's outer circumference matches the circumference of the door, instead of the inner circumference. Hence, the pulley needed to be remade.
_(07/11/2023)_

https://github.com/itsdombo/CluckGuard/assets/31048418/1bde3d5f-ca86-47e0-8f9a-243646589890

Above showcases the chicken door with the updated pulley, the inner circumference matching that of 14 inches. In this video, a light is shined onto the photoresistor, winding the pulley up. Once the pulley is given the signal to return to normal voltage, it cannot bear the weight of the door, hence why it falls back down in the video.

The final step from here will be to design the locking mechanism for the door, as mentioned above.
_(07/13/2023)_

![Stopper ensuring door does not overshoot](images/stopper.gif)

A simple stopper was installed on the pulley using the a screw and some plumbers strap, which was cut to reduce bulk, this will ensure that the door does not overshoot.

All that is left is the catch mechanism for the door. An SG90 pulley may have enough stall torque to ensure that the door does not fall. This will bypass the need for CAD or springlocks as the servo can just be toggled into its off and on state.
_(07/25/2023)_

## Operation

Once installed, CluckGuard will automatically open and close the door based on the sunrise and sunset times. The device uses a photoresistor to determine when the sun is rising and setting, and adjusts the door accordingly. If you need to adjust the opening and closing times, you can do so by adjusting the parameters in the code.

## Maintenance

CluckGuard is designed to be low-maintenance and weather-resistant. However, it is important to periodically check the batteries (if plugged in with batteries) and ensure that the photoresistor is calibrated so the door closes at the right time of day.

## Contribution

This repo is just a personal project of mine, you are welcome to use any of the code or anything else here for your own project of a similar kind.

## Credits

This project was developed by [Dominic Rousseau](https://github.com/itsdombo/).

Special thanks to my dad for providing me with his carpentry skills and woodworking tools. Without him, this project would never have made it this far.

## License

This project is licensed under the [GPL-3.0 License](LICENSE).




