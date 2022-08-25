

## <div align="center">Get Started</div>

<details open>
<summary>Install</summary>

Clone repo and install [requirements.txt](https://github.com/ultralytics/yolov5/blob/master/requirements.txt) in a
[**Python>=3.7.0**](https://www.python.org/) environment, including
[**PyTorch>=1.7**](https://pytorch.org/get-started/locally/).                                                                                             
  Install [ROS](http://wiki.ros.org/ROS/Installation)   
  You'd need 2 servos attached to the camera for yaw and pitch movement
  </details>


```bash
git clone https://github.com/ahmedmuzammilAI/realtime-object-tracking-system
cd aim-with-yolov5
pip install -r requirements.txt 
```


<details open>
<summary>Run using</summary>

```bash
roscore # run in a separate terminal
python detectwros.py --weights {your weights file} --conf 0.50 --source 0 # webcam
  
```

</details>

<details open>
<summary>Arduino setup</summary>

Attach the servos to camera module
  you can buy one from [here](https://www.amazon.in/Techtonics-bracket-camera-platform-2-Axis/dp/B08GG75JD2/ref=asc_df_B08GG75JD2/?tag=googleshopdes-21&linkCode=df0&hvadid=397082759516&hvpos=&hvnetw=g&hvrand=1244238866930319523&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1007740&hvtargid=pla-1225842568200&psc=1&ext_vrnc=hi)

Upload the aim-servo arduino code
  and you're good to go
</details>



