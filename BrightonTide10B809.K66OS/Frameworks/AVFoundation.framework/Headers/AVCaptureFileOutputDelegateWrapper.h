/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSArray;
@protocol AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {
	id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> _delegate;	// 4 = 0x4
	NSURL *_outputFileURL;	// 8 = 0x8
	BOOL _receivedDidStartRecording;	// 12 = 0xc
	BOOL _receivedDidStopRecording;	// 13 = 0xd
	NSString *_didStopRecordingReason;	// 16 = 0x10
	NSArray *_metadata;	// 20 = 0x14
	NSArray *_connections;	// 24 = 0x18
}
@property(readonly, assign) NSArray *connections;	// G=0x3029b775; @synthesize=_connections
@property(readonly, assign) id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> delegate;	// G=0x3029b6a5; @synthesize=_delegate
@property(copy) NSString *didStopRecordingReason;	// G=0x3029b72d; S=0x3029b741; @synthesize=_didStopRecordingReason
@property(retain) NSArray *metadata;	// G=0x3029b751; S=0x3029b765; @synthesize=_metadata
@property(readonly, assign) NSURL *outputFileURL;	// G=0x3029b6b9; @synthesize=_outputFileURL
@property(assign) BOOL receivedDidStartRecording;	// G=0x3029b6cd; S=0x3029b6e5; @synthesize=_receivedDidStartRecording
@property(assign) BOOL receivedDidStopRecording;	// G=0x3029b6fd; S=0x3029b715; @synthesize=_receivedDidStopRecording
+ (id)wrapperWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x3029b535
- (id)initWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x3029b589
// declared property getter: - (id)connections;	// 0x3029b775
- (void)dealloc;	// 0x3029b619
// declared property getter: - (id)delegate;	// 0x3029b6a5
// declared property getter: - (id)didStopRecordingReason;	// 0x3029b72d
// declared property getter: - (id)metadata;	// 0x3029b751
// declared property getter: - (id)outputFileURL;	// 0x3029b6b9
// declared property getter: - (BOOL)receivedDidStartRecording;	// 0x3029b6cd
// declared property getter: - (BOOL)receivedDidStopRecording;	// 0x3029b6fd
// declared property setter: - (void)setDidStopRecordingReason:(id)stopRecordingReason;	// 0x3029b741
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3029b765
// declared property setter: - (void)setReceivedDidStartRecording:(BOOL)startRecording;	// 0x3029b6e5
// declared property setter: - (void)setReceivedDidStopRecording:(BOOL)stopRecording;	// 0x3029b715
@end
