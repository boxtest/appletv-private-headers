/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <Foundation/NSMutableArray.h>

@class NSPropertyDescription, NSManagedObject;

@interface _NSFaultingMutableArray : NSMutableArray {
	int _cd_rc;	// 4 = 0x4
	NSMutableArray *_realArray;	// 8 = 0x8
	NSManagedObject *_source;	// 12 = 0xc
	NSPropertyDescription *_relationship;	// 16 = 0x10
	NSFaultingMutableArrayFlags _flags;	// 20 = 0x14
}
@property(readonly, retain) NSPropertyDescription *relationship;	// G=0x2d07118d; converted property
@property(readonly, retain) NSManagedObject *source;	// G=0x2d07117d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x2d070df5
+ (id)alloc;	// 0x2d070df9
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d070e01
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x2d070f41
- (BOOL)_isDeallocating;	// 0x2d070f19
- (BOOL)_tryRetain;	// 0x2d070ecd
- (void)addObject:(id)object;	// 0x2d0714dd
- (id)copyWithZone:(NSZone *)zone;	// 0x2d07119d
- (unsigned)count;	// 0x2d071461
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d07151d
- (void)dealloc;	// 0x2d071009
- (id)description;	// 0x2d07124d
- (id)descriptionWithLocale:(id)locale;	// 0x2d0712fd
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x2d0713ad
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x2d0715a5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x2d071561
- (void)getObjects:(id *)objects;	// 0x2d071839
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d07162d
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d0715e9
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d0716b5
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d071671
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x2d071735
- (BOOL)isFault;	// 0x2d071059
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d07123d
- (id)objectAtIndex:(unsigned)index;	// 0x2d07149d
- (id)objectEnumerator;	// 0x2d0716f9
// converted property getter: - (id)relationship;	// 0x2d07118d
- (oneway void)release;	// 0x2d070e41
- (void)removeLastObject;	// 0x2d071779
- (void)removeObjectAtIndex:(unsigned)index;	// 0x2d0717b5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x2d0717f5
- (id)retain;	// 0x2d070e09
- (unsigned)retainCount;	// 0x2d070eb9
- (void)setValue:(id)value forKey:(id)key;	// 0x2d071879
// converted property getter: - (id)source;	// 0x2d07117d
- (void)turnIntoFault;	// 0x2d07113d
- (id)valueForKey:(id)key;	// 0x2d0718bd
- (id)valueForKeyPath:(id)keyPath;	// 0x2d0718fd
- (void)willRead;	// 0x2d07106d
@end

