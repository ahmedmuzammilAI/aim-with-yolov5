

## <div align="center">Get Started</div>

<details open>
<summary>Install</summary>

Clone repo and install [requirements.txt](https://github.com/ultralytics/yolov5/blob/master/requirements.txt) in a
[**Python>=3.7.0**](https://www.python.org/) environment, including
[**PyTorch>=1.7**](https://pytorch.org/get-started/locally/).\n
  Install [ROS](http://wiki.ros.org/ROS/Installation) \n
  You'd need 2 servos attached to the camera for yaw and pitch movement
  

```bash
git clone https://github.com/ahmedmuzammilAI/aim-with-yolov5 
cd yolov5
pip install -r requirements.txt 
```

</details>


<details>
<summary>Run using</summary>

```bash
roscore # run in a separate terminal
python detectwros.py --weights {your weights file} --conf 0.50 --source 0 # webcam
  
```

</details>

<details>
<summary>Arduino setup</summary>

Attach the servos to camera module
  you can buy one from [here](https://www.amazon.in/Techtonics-bracket-camera-platform-2-Axis/dp/B08GG75JD2/ref=asc_df_B08GG75JD2/?tag=googleshopdes-21&linkCode=df0&hvadid=397082759516&hvpos=&hvnetw=g&hvrand=1244238866930319523&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1007740&hvtargid=pla-1225842568200&psc=1&ext_vrnc=hi)

```bash
python train.py --data coco.yaml --cfg yolov5n.yaml --weights '' --batch-size 128
                                       yolov5s                                64
                                       yolov5m                                40
                                       yolov5l                                24
                                       yolov5x                                16
```

<img width="800" src="https://user-images.githubusercontent.com/26833433/90222759-949d8800-ddc1-11ea-9fa1-1c97eed2b963.png">

</details>



