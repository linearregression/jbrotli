/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_meteogroup_jbrotli_BrotliStreamDeCompressor */

#ifndef _Included_org_meteogroup_jbrotli_BrotliStreamDeCompressor
#define _Included_org_meteogroup_jbrotli_BrotliStreamDeCompressor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_meteogroup_jbrotli_BrotliStreamDeCompressor
 * Method:    initJavaFieldIdCache
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_meteogroup_jbrotli_BrotliStreamDeCompressor_initJavaFieldIdCache
  (JNIEnv *, jclass);

/*
 * Class:     org_meteogroup_jbrotli_BrotliStreamDeCompressor
 * Method:    initBrotliDeCompressor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_meteogroup_jbrotli_BrotliStreamDeCompressor_initBrotliDeCompressor
  (JNIEnv *, jobject);

/*
 * Class:     org_meteogroup_jbrotli_BrotliStreamDeCompressor
 * Method:    freeNativeResources
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_meteogroup_jbrotli_BrotliStreamDeCompressor_freeNativeResources
  (JNIEnv *, jobject);

/*
 * Class:     org_meteogroup_jbrotli_BrotliStreamDeCompressor
 * Method:    deCompressBytes
 * Signature: ([BII[BII)J
 */
JNIEXPORT jobject JNICALL Java_org_meteogroup_jbrotli_BrotliStreamDeCompressor_deCompressBytes
  (JNIEnv *, jobject, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_meteogroup_jbrotli_BrotliStreamDeCompressor
 * Method:    deCompressByteBuffer
 * Signature: (Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)J
 */
JNIEXPORT jobject JNICALL Java_org_meteogroup_jbrotli_BrotliStreamDeCompressor_deCompressByteBuffer
  (JNIEnv *, jobject, jobject, jint, jint, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
