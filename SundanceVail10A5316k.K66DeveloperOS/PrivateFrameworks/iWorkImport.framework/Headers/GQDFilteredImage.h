/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQDImageBinary;

__attribute__((visibility("hidden")))
@interface GQDFilteredImage : NSObject <GQDNameMappable> {
@private
	GQDImageBinary *mOriginalImageBinary;	// 4 = 0x4
	GQDImageBinary *mFilteredImageBinary;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x36cb5a45
- (void)dealloc;	// 0x36cb59e1
- (id)imageBinary;	// 0x36cb59bd
@end
