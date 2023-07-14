# CluckGuard - Automatic Chicken Coop Door

CluckGuard is an automated chicken coop door that is designed to open and close automatically based on sunrise and sunset. With this device, you will no longer have to worry about letting your chickens out in the morning or locking them up at night. It is easy to install and operate, making it a perfect solution for any chicken owner.

This project is still a work in progress! Check out the [wiki](https://github.com/itsdombo/CluckGuard/wiki) and the [changelog](changelog.md) to see updates.

## Demo Videos

In the current state of the project. The door is unable to hold up the door without a constant supply of the correct voltage. This can be solved either by:
1. Programming the Arduino to supply the correct voltage necessary to counteract the weight of the door.
2. Integrating a locking mechanism to hold the door in place in the open position.

For reasons of mechanical stress on the electrical components and longevity in the lifespan of the product, I have decided to go with the second option.

The next following week or two will be dedicated to prototyping and CAD design of the locking mechanism: A spring-locked wedge that is unlocked by the force of a servo (no bigger than an SG90).

Below are two videos demoing the promising progress of the door.

 <img src="/images/initialTest.mov" width="30%" alt="Video of mounted system with original pulley" />
 <img src="/images/newPulley.mov" width="30%" alt="Video of mounted system with new pulley" />

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




