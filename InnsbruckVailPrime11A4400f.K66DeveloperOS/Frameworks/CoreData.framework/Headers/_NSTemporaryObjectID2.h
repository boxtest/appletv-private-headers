/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSTemporaryObjectID.h"

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
	id _store;	// 16 = 0x10
	_NS128bitWrapper *_uuid128;	// 20 = 0x14
}
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x2d1367f9
- (BOOL)_isPersistentStoreAlive;	// 0x2d136aa5
- (id)_referenceData;	// 0x2d136b69
- (void)_setPersistentStore:(id)store;	// 0x2d136abd
- (id)_storeIdentifier;	// 0x2d136a75
- (void)dealloc;	// 0x2d13696d
- (void)finalize;	// 0x2d1369f1
- (unsigned)hash;	// 0x2d1369f5
- (BOOL)isEqual:(id)equal;	// 0x2d136b01
- (id)persistentStore;	// 0x2d136a95
@end

