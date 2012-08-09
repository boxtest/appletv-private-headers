/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSMetadataQuery : NSObject {
	unsigned _flags;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	id _private[11];	// 16 = 0x10
	void *_reserved;	// 60 = 0x3c
}
@property(assign) id delegate;	// G=0x3468ce65; S=0x3468ce79; converted property
@property(retain) id groupingAttributes;	// G=0x3468d15d; S=0x3468d171; converted property
@property(assign) double notificationBatchingInterval;	// G=0x3468d3c9; S=0x3468d3e1; converted property
@property(retain) id predicate;	// G=0x3468cf05; S=0x3468cf15; converted property
@property(retain) id searchItemURLs;	// G=0x3468d525; S=0x3468d539; converted property
@property(retain) id searchScopes;	// G=0x3468d461; S=0x3468d475; converted property
@property(retain) id sortDescriptors;	// G=0x3468cfd5; S=0x3468cfe9; converted property
@property(retain) id valueListAttributes;	// G=0x3468d099; S=0x3468d0ad; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3468ca11
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3468c931
- (id)init;	// 0x3468ca15
- (id)_allAttributes;	// 0x3468d31d
- (void)_noteNote1:(id)a1;	// 0x3468d651
- (void)_noteNote2:(id)a2;	// 0x3468d695
- (void)_noteNote3:(id)a3;	// 0x3468d725
- (void)_noteNote4:(id)a4;	// 0x3468d7b5
- (id)_queryString;	// 0x3468d8b9
- (void)_recreateQuery;	// 0x3468d9cd
- (void)_resetQueryState;	// 0x3468d8d9
- (void)_setBatchingParams;	// 0x3468d5e9
- (id)_sortingAttributes;	// 0x3468d221
- (void)_update;	// 0x3468e6fd
- (void)_zapResultArray;	// 0x3468e845
- (void)dealloc;	// 0x3468cb4d
// converted property getter: - (id)delegate;	// 0x3468ce65
- (void)disableUpdates;	// 0x3468e65d
- (void)enableUpdates;	// 0x3468e6a5
- (void)finalize;	// 0x3468cd75
- (id)groupedResults;	// 0x3468ed39
// converted property getter: - (id)groupingAttributes;	// 0x3468d15d
- (unsigned)indexOfResult:(id)result;	// 0x3468e9c9
- (BOOL)isGathering;	// 0x3468e635
- (BOOL)isStarted;	// 0x3468e621
- (BOOL)isStopped;	// 0x3468e649
// converted property getter: - (double)notificationBatchingInterval;	// 0x3468d3c9
// converted property getter: - (id)predicate;	// 0x3468cf05
- (id)resultAtIndex:(unsigned)index;	// 0x3468e78d
- (unsigned)resultCount;	// 0x3468e765
- (id)results;	// 0x3468e8b9
// converted property getter: - (id)searchItemURLs;	// 0x3468d525
// converted property getter: - (id)searchScopes;	// 0x3468d461
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3468ce79
// converted property setter: - (void)setGroupingAttributes:(id)attributes;	// 0x3468d171
// converted property setter: - (void)setNotificationBatchingInterval:(double)interval;	// 0x3468d3e1
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x3468cf15
// converted property setter: - (void)setSearchItemURLs:(id)urls;	// 0x3468d539
// converted property setter: - (void)setSearchScopes:(id)scopes;	// 0x3468d475
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x3468cfe9
// converted property setter: - (void)setValueListAttributes:(id)attributes;	// 0x3468d0ad
// converted property getter: - (id)sortDescriptors;	// 0x3468cfd5
- (BOOL)startQuery;	// 0x3468e44d
- (void)stopQuery;	// 0x3468e535
// converted property getter: - (id)valueListAttributes;	// 0x3468d099
- (id)valueLists;	// 0x3468ea01
- (id)valueOfAttribute:(id)attribute forResultAtIndex:(unsigned)index;	// 0x3468ef0d
@end
