/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSURL;

@interface AVValidatorInternal : NSObject {
	NSURL *initialURL;	// 4 = 0x4
	NSURL *resolvedURL;	// 8 = 0x8
	float progress;	// 12 = 0xc
	unsigned flags;	// 16 = 0x10
	BOOL resourceIsPlayable;	// 20 = 0x14
	int status;	// 24 = 0x18
	int figError;	// 28 = 0x1c
	FigOpaqueMediaValidator *figMediaValidatorRef;	// 32 = 0x20
	id clientValidatorHandler;	// 36 = 0x24
	OpaqueFigSimpleMutex *figMediaValidatorMutex;	// 40 = 0x28
	NSDictionary *validationPlist;	// 44 = 0x2c
}
@end

