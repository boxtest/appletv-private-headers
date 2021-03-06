/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureInput.h"

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
	AVCaptureDeviceInputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVCaptureDevice *device;	// G=0x34214a6d; 
+ (id)deviceInputWithDevice:(id)device error:(id *)error;	// 0x34214845
- (id)init;	// 0x34214979
- (id)initWithDevice:(id)device error:(id *)error;	// 0x34214895
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x34215175
- (void)_setDevice:(id)device;	// 0x34214a91
- (void)dealloc;	// 0x34214991
- (id)description;	// 0x342149f5
// declared property getter: - (id)device;	// 0x34214a6d
- (void)didStartForSession:(id)session;	// 0x34215105
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x342151cd
- (id)notReadyError;	// 0x34214c4d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34214bfd
- (id)ports;	// 0x34214db5
- (void)setDevice:(id)device;	// 0x34214a8d
- (void)setSession:(id)session;	// 0x34215049
- (void)willStartForSession:(id)session;	// 0x342150a9
@end

