/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSTemporaryObjectID.h"

@class _NS128bitWrapper;

__attribute__((visibility("hidden")))
@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
@private
	id _store;	// 16 = 0x10
	_NS128bitWrapper *_uuid128;	// 20 = 0x14
}
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x3401d939
- (BOOL)_isPersistentStoreAlive;	// 0x3401d015
- (id)_referenceData;	// 0x3401d02d
- (void)_setPersistentStore:(id)store;	// 0x3401db09
- (id)_storeIdentifier;	// 0x3401db51
- (void)dealloc;	// 0x3401dbf5
- (void)finalize;	// 0x3401d001
- (unsigned)hash;	// 0x3401db71
- (BOOL)isEqual:(id)equal;	// 0x3401da9d
- (id)persistentStore;	// 0x3401d005
@end

