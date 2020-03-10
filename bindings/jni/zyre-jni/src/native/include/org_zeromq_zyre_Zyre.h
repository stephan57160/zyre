/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_zeromq_zyre_Zyre */

#ifndef _Included_org_zeromq_zyre_Zyre
#define _Included_org_zeromq_zyre_Zyre
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __new
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1new
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __uuid
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zeromq_zyre_Zyre__1_1uuid
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zeromq_zyre_Zyre__1_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setName
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setHeader
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setHeader
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setVerbose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setVerbose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setPort
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setPort
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setBeaconPeerPort
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setBeaconPeerPort
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setEvasiveTimeout
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setEvasiveTimeout
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setSilentTimeout
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setSilentTimeout
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setExpiredTimeout
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setExpiredTimeout
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setInterval
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setInterval
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setInterface
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setInterface
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setEndpoint
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1setEndpoint
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setContestInGroup
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setContestInGroup
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setAdvertisedEndpoint
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setAdvertisedEndpoint
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setZcert
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setZcert
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __setZapDomain
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1setZapDomain
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __gossipBind
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1gossipBind
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __gossipConnect
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1gossipConnect
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __gossipConnectCurve
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1gossipConnectCurve
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __gossipUnpublish
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1gossipUnpublish
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1start
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1stop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __join
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1join
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __leave
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1leave
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __recv
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1recv
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __whisper
 * Signature: (JLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1whisper
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __shout
 * Signature: (JLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1shout
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __whispers
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1whispers
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __shouts
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1shouts
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __peers
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1peers
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __peersByGroup
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1peersByGroup
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __ownGroups
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1ownGroups
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __peerGroups
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1peerGroups
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __peerAddress
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zeromq_zyre_Zyre__1_1peerAddress
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __peerHeaderValue
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zeromq_zyre_Zyre__1_1peerHeaderValue
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __requirePeer
 * Signature: (JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_zyre_Zyre__1_1requirePeer
  (JNIEnv *, jclass, jlong, jstring, jstring, jstring);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __socket
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1socket
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __socketZmq
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1socketZmq
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __print
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1print
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __version
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_zyre_Zyre__1_1version
  (JNIEnv *, jclass);

/*
 * Class:     org_zeromq_zyre_Zyre
 * Method:    __test
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_zyre_Zyre__1_1test
  (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
