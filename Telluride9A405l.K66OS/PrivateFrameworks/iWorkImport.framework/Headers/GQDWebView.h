/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDImageBinary;

__attribute__((visibility("hidden")))
@interface GQDWebView : GQDGraphic <GQDNameMappable> {
@private
	GQDImageBinary *mImageBinary;	// 40 = 0x28
}
+ (const StateSpec *)stateForReading;	// 0x34252a69
- (void)dealloc;	// 0x34252a85
- (id)imageBinary;	// 0x34252a75
@end

