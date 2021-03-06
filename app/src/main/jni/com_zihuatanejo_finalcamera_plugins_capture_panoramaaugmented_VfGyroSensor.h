/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor */

#ifndef _Included_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
#define _Included_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
#ifdef __cplusplus
extern "C" {
#endif
#undef com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_SMOOTH_MOTION
#define com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_SMOOTH_MOTION 1L
#undef com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_EARLY_TIMESTAMP
#define com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_EARLY_TIMESTAMP 1L
#undef com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_MSG_SMOOTHER_GYRO
#define com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_MSG_SMOOTHER_GYRO 1L
/*
 * Class:     com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
 * Method:    Initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_Initialize
  (JNIEnv *, jobject);

/*
 * Class:     com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
 * Method:    Release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_Release
  (JNIEnv *, jobject);

/*
 * Class:     com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
 * Method:    SetFrameParameters
 * Signature: (IIFF)V
 */
JNIEXPORT void JNICALL Java_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_SetFrameParameters
  (JNIEnv *, jobject, jint, jint, jfloat, jfloat);

/*
 * Class:     com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
 * Method:    Update
 * Signature: ([BJZ)V
 */
JNIEXPORT void JNICALL Java_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_Update
  (JNIEnv *, jobject, jbyteArray, jlong, jboolean);

/*
 * Class:     com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
 * Method:    Get
 * Signature: ([F)J
 */
JNIEXPORT jlong JNICALL Java_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_Get
  (JNIEnv *, jobject, jfloatArray);

/*
 * Class:     com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor
 * Method:    FixDrift
 * Signature: ([FZ)V
 */
JNIEXPORT void JNICALL Java_com_zihuatanejo_finalcamera_plugins_capture_panoramaaugmented_VfGyroSensor_FixDrift
  (JNIEnv *, jclass, jfloatArray, jboolean);

#ifdef __cplusplus
}
#endif
#endif
