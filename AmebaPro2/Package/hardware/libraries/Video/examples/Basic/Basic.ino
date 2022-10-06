/**
    This function describes how to use the Realtek Camera API.
    ISP channel : 0
    Video type  : H264/HEVC
    Sensor      : SENSOR_JXF37
*/
#include "camera.h"

/* Create an camera object */
Camera cam;

void setup() {
  Serial.begin(115200);
  Serial.println("[MAIN] Start Camera Init");

  void *p = cam.Init();
  cam.Open();
  cam.Start();
//  cam.Close();
//  cam.DeInit();
}

void loop() {
}
