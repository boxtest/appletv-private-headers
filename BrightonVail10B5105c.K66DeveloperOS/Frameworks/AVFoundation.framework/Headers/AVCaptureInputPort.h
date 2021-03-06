/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVCaptureInput, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
	AVCaptureInputPortInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3030a2cd; S=0x3030a2ed; 
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *formatDescription;	// G=0x3030a235; 
@property(readonly, assign, nonatomic) AVCaptureInput *input;	// G=0x3030a1d1; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3030a1f1; 
+ (id)portWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x30309ef1
- (id)init;	// 0x30309f49
- (id)initWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x30309fc9
- (void)_setFormatDescription:(opaqueCMFormatDescription *)description;	// 0x3030a255
- (void)dealloc;	// 0x3030a069
- (id)description;	// 0x3030a0d5
// declared property getter: - (opaqueCMFormatDescription *)formatDescription;	// 0x3030a235
// declared property getter: - (id)input;	// 0x3030a1d1
// declared property getter: - (BOOL)isEnabled;	// 0x3030a2cd
// declared property getter: - (id)mediaType;	// 0x3030a1f1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3030a2ed
- (void)setOwner:(id)owner;	// 0x3030a0b5
@end

