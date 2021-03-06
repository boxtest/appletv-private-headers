/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {
	void *_ptpCameraProperties;	// 12 = 0xc
}
@property(readonly, assign) PTPInitiator *initiator;	// G=0x343e03dd; 
- (id)initWithTCPIPInfo:(id)tcpipinfo;	// 0x343dfe65
- (id)initWithUSBLocationID:(unsigned)usblocationID;	// 0x343df9e5
- (void)addToEventHandlerQ:(id)eventHandlerQ;	// 0x343e0581
- (void)dealloc;	// 0x343e0325
- (BOOL)eject;	// 0x343e0495
- (void)enumerateContent;	// 0x343e03f1
- (void)finalize;	// 0x343e0381
// declared property getter: - (id)initiator;	// 0x343e03dd
@end

