# Windows Shutdown Scheduler

A simple and lightweight application for scheduling automatic shutdowns on Windows.

## About

This application provides a convenient way to automate the shutdown process on your Windows machine at a specified time. It's built with simplicity and efficiency in mind, giving you control over your system's power state without unnecessary complexity.

## Features

* **Schedule a shutdown:** Easily set a specific time for your computer to automatically shut down.
* **Cancel scheduled action:** Quickly cancel any previously scheduled shutdown if your plans change.

## How to Use

### Using the Executable

1.  Download the latest release executable from the [Releases](https://github.com/LukaDraganovic/Shutdown-scheduler/releases) page. 
2.  Run the downloaded executable.
3.  Select the desired action (e.g., Schedule Shutdown).
4.  Enter the time in `HH:MM` format (24-hour clock, e.g., `23:00` for 11 PM). Don't forget the colon!

### Building from Source

If you prefer to build the application yourself from the source code, follow these steps:

#### Requirements

* Visual Studio 2022

#### Steps

1.  Clone the repository:

    ```bash
    git clone [https://github.com/LukaDraganovic/Shutdown-scheduler.git](https://github.com/LukaDraganovic/Shutdown-scheduler.git)
    ```

   

2.  Open the project solution file (`.sln`) in Visual Studio 2022.
3.  Select the **`Release`** build configuration from the dropdown menu.
4.  Go to `Build > Build Solution`.
5.  The compiled executable will be found in the `Release` folder within your project's output directory.

## Requirements

* **Operating System:** Windows 7 or later

## Contributing

Contributions are always welcome!

* If you find a bug or have a feature request, please [open an issue](https://github.com/LukaDraganovic/Shutdown-scheduler/issues).
* If you'd like to contribute code, please fork the repository and create a pull request.

## Author

* Luka Draganović
