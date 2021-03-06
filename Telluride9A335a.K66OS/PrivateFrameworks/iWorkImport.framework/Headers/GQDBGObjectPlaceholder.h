/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"
#import "GQDBGPlaceholder.h"

@class GQDDrawable;

__attribute__((visibility("hidden")))
@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable> {
@private
	char *mContentType;	// 44 = 0x2c
	GQDDrawable *mDrawable;	// 48 = 0x30
}
+ (const StateSpec *)stateForReading;	// 0x30463d35
- (void)dealloc;	// 0x30463f21
- (id)drawable;	// 0x30463d41
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x30463f8d
@end

