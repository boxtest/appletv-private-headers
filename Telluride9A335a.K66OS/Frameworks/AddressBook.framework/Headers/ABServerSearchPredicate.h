/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "DASearchQueryConsumer.h"
#import "ABPredicate.h"

@class NSString, DADConnection, DAContactsSearchQuery, NSConditionLock, NSMutableArray;
@protocol ABPredicateDelegate;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
@private
	void *_source;	// 8 = 0x8
	NSString *_accountIdentifier;	// 12 = 0xc
	NSString *_searchString;	// 16 = 0x10
	BOOL _includeSourceInResults;	// 20 = 0x14
	DADConnection *_connection;	// 24 = 0x18
	DAContactsSearchQuery *_searchQuery;	// 28 = 0x1c
	NSMutableArray *_searchResults;	// 32 = 0x20
	NSConditionLock *_doneLock;	// 36 = 0x24
	int _error;	// 40 = 0x28
	id<ABPredicateDelegate> _delegate;	// 44 = 0x2c
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x34023431; S=0x340234e9; @synthesize=_accountIdentifier
@property(retain, nonatomic) DADConnection *connection;	// G=0x34023b25; S=0x34023531; @synthesize=_connection
@property(assign, nonatomic) id<ABPredicateDelegate> delegate;	// G=0x340233e1; S=0x340233f1; @synthesize=_delegate
@property(readonly, assign, nonatomic) int error;	// G=0x340233d1; @synthesize=_error
@property(assign, nonatomic) BOOL includeSourceInResults;	// G=0x34023401; S=0x34023411; @synthesize=_includeSourceInResults
@property(copy, nonatomic) NSString *searchString;	// G=0x34023421; S=0x3402350d; @synthesize=_searchString
@property(assign, nonatomic) void *source;	// G=0x34023441; S=0x34023b71; @synthesize=_source
- (id)initWithSearchString:(id)searchString source:(void *)source account:(id)account;	// 0x34023c39
- (id)initWithSearchString:(id)searchString source:(void *)source account:(id)account includeSourceInResults:(BOOL)results;	// 0x34023451
- (int)_errorForDAStatusCode:(int)dastatusCode;	// 0x340233bd
- (void)_searchQueryIsDone;	// 0x340238b5
- (void)ab_runPredicateWithSortOrder:(unsigned)sortOrder inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x3402390d
// declared property getter: - (id)accountIdentifier;	// 0x34023431
// declared property getter: - (id)connection;	// 0x34023b25
- (void)dealloc;	// 0x34023bad
// declared property getter: - (id)delegate;	// 0x340233e1
// declared property getter: - (int)error;	// 0x340233d1
// declared property getter: - (BOOL)includeSourceInResults;	// 0x34023401
- (void)runPredicate;	// 0x34023941
- (void)runPredicateWithDelegate:(id)delegate;	// 0x34023921
- (void)searchQuery:(id)query finishedWithError:(id)error;	// 0x34023559
- (void)searchQuery:(id)query returnedResults:(id)results;	// 0x34023649
// declared property getter: - (id)searchString;	// 0x34023421
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x340234e9
// declared property setter: - (void)setConnection:(id)connection;	// 0x34023531
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x340233f1
// declared property setter: - (void)setIncludeSourceInResults:(BOOL)results;	// 0x34023411
// declared property setter: - (void)setSearchString:(id)string;	// 0x3402350d
// declared property setter: - (void)setSource:(void *)source;	// 0x34023b71
// declared property getter: - (void *)source;	// 0x34023441
@end
