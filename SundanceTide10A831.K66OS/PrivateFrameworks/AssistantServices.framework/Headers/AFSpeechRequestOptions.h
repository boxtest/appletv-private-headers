/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AFSpeechRequestOptions : NSObject {
	int _event;	// 4 = 0x4
	NSString *_btDeviceAddress;	// 8 = 0x8
	BOOL _isEyesFree;	// 12 = 0xc
}
@property(assign, nonatomic) int activationEvent;	// G=0x32c3f075; S=0x32c3f085; @synthesize=_event
@property(copy, nonatomic) NSString *btDeviceAddress;	// G=0x32c3f095; S=0x32c3f0a9; @synthesize=_btDeviceAddress
@property(assign, nonatomic) BOOL isEyesFree;	// G=0x32c3f0b9; S=0x32c3f0c9; @synthesize=_isEyesFree
- (id)initWithActivationEvent:(int)activationEvent;	// 0x32c3ee11
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x32c3ef65
- (void).cxx_destruct;	// 0x32c3f0d9
// declared property getter: - (int)activationEvent;	// 0x32c3f075
// declared property getter: - (id)btDeviceAddress;	// 0x32c3f095
- (id)dkPlistRepresentation;	// 0x32c3ee5d
// declared property getter: - (BOOL)isEyesFree;	// 0x32c3f0b9
// declared property setter: - (void)setActivationEvent:(int)event;	// 0x32c3f085
// declared property setter: - (void)setBtDeviceAddress:(id)address;	// 0x32c3f0a9
// declared property setter: - (void)setIsEyesFree:(BOOL)free;	// 0x32c3f0c9
@end
