/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

@interface ESDRoot : ESDObject {
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)init;	// 0x34e5ecbd
- (id)initFromReader:(OcReader *)reader;	// 0x34f7e6c5
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x34e5f0ed
- (id)initWithPbState:(id)pbState;	// 0x34e5ea8d
- (void)addChild:(id)child;	// 0x350adfd1
- (id)childAt:(unsigned)at;	// 0x34e6c7fd
- (unsigned)childCount;	// 0x34e6c7dd
- (void)dealloc;	// 0x34ee05a1
- (EshRoot *)eshRoot;	// 0x34e5f1c1
- (id)pbReferenceWithID:(unsigned long)anId;	// 0x34e6c729
- (void)writeToWriter:(OcWriter *)writer;	// 0x350ae029
@end

