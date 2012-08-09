/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import "MPMediaArray.h"

@class NSMutableArray, MPMediaQuerySectionInfo, MPMediaLibrary, MPMediaQueryCriteria, NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaEntityStreamArray : MPMediaArray <NSCopying> {
	Class _entityClass;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	MPMediaQueryCriteria *_queryCriteria;	// 12 = 0xc
	MPMediaLibrary *_library;	// 16 = 0x10
	int _containedMediaTypes;	// 20 = 0x14
	NSMutableArray *_entities;	// 24 = 0x18
	CFArrayRef _entitiesSemaphores;	// 28 = 0x1c
	unsigned _entitiesSemaphoreIndex;	// 32 = 0x20
	unsigned _count;	// 36 = 0x24
	MPMediaQuerySectionInfo *_sectionInfo;	// 40 = 0x28
	CFArrayRef _countAndSectionInfoSemaphores;	// 44 = 0x2c
	unsigned _hasCountAndSectionInfo : 1;	// 48 = 0x30
	CFArrayRef _isEmptySemaphores;	// 52 = 0x34
	int _retainCount;	// 56 = 0x38
	unsigned _isEmpty : 1;	// 60 = 0x3c
	unsigned _hasIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingEntities : 1;	// 60 = 0x3c
	unsigned _isImmediate : 1;	// 60 = 0x3c
}
@property(assign, nonatomic) int containedMediaTypes;	// G=0x341cd815; S=0x341cd825; @synthesize=_containedMediaTypes
@property(readonly, assign) unsigned count;	// G=0x341cc585; converted property
@property(readonly, assign, nonatomic) MPMediaLibrary *library;	// G=0x341ccd3d; 
@property(readonly, assign, nonatomic) MPMediaQueryCriteria *queryCriteria;	// G=0x341cd835; @synthesize=_queryCriteria
@property(readonly, retain) MPMediaQuerySectionInfo *sectionInfo;	// G=0x341cc74d; converted property
- (id)init;	// 0x341cbfad
- (id)initWithCoder:(id)coder;	// 0x341cc345
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library;	// 0x341cc031
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library immediate:(BOOL)immediate;	// 0x341cc055
- (BOOL)MPIsEmpty;	// 0x341cc3b9
- (void)_commonInitMPMediaEntityStreamArray;	// 0x341cbff9
- (void)_onQueueAddObject:(id)object;	// 0x341cd039
- (void)_onQueueStartLoadingEntities;	// 0x341cd661
- (void)_onQueueStartLoadingIsEmpty;	// 0x341cd3f5
- (void)addCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x341cd26d
- (void)addItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x341cd0e9
// declared property getter: - (int)containedMediaTypes;	// 0x341cd815
- (id)copyWithZone:(NSZone *)zone;	// 0x341cc3a9
// converted property getter: - (unsigned)count;	// 0x341cc585
- (void)dealloc;	// 0x341cc261
// declared property getter: - (id)library;	// 0x341ccd3d
- (id)objectAtIndex:(unsigned)index;	// 0x341cc9e5
- (id)propertiesToFetch;	// 0x341ccd4d
// declared property getter: - (id)queryCriteria;	// 0x341cd835
// converted property getter: - (id)sectionInfo;	// 0x341cc74d
// declared property setter: - (void)setContainedMediaTypes:(int)types;	// 0x341cd825
- (void)setCount:(unsigned)count sectionInfo:(id)info;	// 0x341ccf05
- (void)setIsEmpty:(BOOL)empty;	// 0x341ccdc9
@end
