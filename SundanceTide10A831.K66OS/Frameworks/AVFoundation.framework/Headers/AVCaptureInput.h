/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {
	AVCaptureInputInternal *_inputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *ports;	// G=0x3421c075; 
@property(retain) id session;	// G=0x3421c091; S=0x3421c0b1; converted property
- (id)init;	// 0x3421bf29
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x3421c0e1
- (void)dealloc;	// 0x3421c029
- (void)didStartForSession:(id)session;	// 0x3421c0d9
- (void)didStopForSession:(id)session error:(id)error;	// 0x3421c0dd
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x3421c0e5
- (id)notReadyError;	// 0x3421c0d1
// declared property getter: - (id)ports;	// 0x3421c075
// converted property getter: - (id)session;	// 0x3421c091
// converted property setter: - (void)setSession:(id)session;	// 0x3421c0b1
- (void)willStartForSession:(id)session;	// 0x3421c0d5
@end

