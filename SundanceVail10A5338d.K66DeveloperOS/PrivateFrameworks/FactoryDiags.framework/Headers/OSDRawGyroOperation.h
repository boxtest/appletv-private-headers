/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSOperation.h> // Unknown library

@class OSDGyroData;

@interface OSDRawGyroOperation : NSOperation {
	id _target;	// 12 = 0xc
	SEL _callback;	// 16 = 0x10
	OSDGyroData *_gyroData;	// 20 = 0x14
}
- (id)initWithGyroData:(id)gyroData target:(id)target callback:(SEL)callback;	// 0x32a1c6dd
- (void)dealloc;	// 0x32a1c769
- (void)main;	// 0x32a1c7cd
@end

