/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMapTable.h"


__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable {
@private
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
		void *notAKeyMarker;
	} _keyCallBacks;	// 4 = 0x4
	struct {
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _valueCallBacks;	// 28 = 0x1c
	CFBasicHashRef _ht;	// 40 = 0x28
}
- (id)init;	// 0x35e5f4fd
- (id)allKeys;	// 0x35e5f9e9
- (id)allValues;	// 0x35e5fc71
- (id)copy;	// 0x35e5f58d
- (unsigned)count;	// 0x35e038f1
- (void)dealloc;	// 0x35e5f501
- (id)description;	// 0x35e5f7e9
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x35e5f75d
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x35e5fefd
- (BOOL)isEqual:(id)equal;	// 0x35e5f555
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x35e5f665
- (id)objectForKey:(id)key;	// 0x35e02b9d
- (void)removeAllItems;	// 0x35e5f541
- (void)removeObjectForKey:(id)key;	// 0x35e03269
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x35e5f6a1
- (void)setObject:(id)object forKey:(id)key;	// 0x35e02bc5
@end
