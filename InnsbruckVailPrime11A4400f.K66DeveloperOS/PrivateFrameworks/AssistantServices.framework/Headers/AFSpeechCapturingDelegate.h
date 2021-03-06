/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import "NSObject.h"


@protocol AFSpeechCapturingDelegate <NSObject>
- (void)speechCapturingDidDetectEndpointAfterStartPoint:(BOOL)speechCapturing;
- (void)speechCapturingDidRecordSpeechPackets:(id)speechCapturing totalPacketCount:(int)count;
- (void)speechCapturingDidStartRecordingSuccessfully:(BOOL)speechCapturing codec:(id)codec source:(id)source deviceId:(id)anId modelName:(id)name;
- (void)speechCapturingDidStopRecordingWithError:(id)speechCapturing endpointMode:(int)mode totalPacketCount:(int)count;
- (void)speechCapturingWillStart:(BOOL)speechCapturing;
@end

