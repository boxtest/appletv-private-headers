/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVURLDocument, NSString, ATVMerchant, NSDictionary, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchResultsLoader : XXUnknownSuperclass {
	ATVURLDocument *_document;	// 4 = 0x4
	NSString *_baseURLString;	// 8 = 0x8
	ATVMerchant *_merchant;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	NSDictionary *_results;	// 20 = 0x14
	ATVFeedDocument *_resultsFeedDocument;	// 24 = 0x18
}
@property(readonly, assign) NSDictionary *results;	// G=0x14db7d; @synthesize=_results
@property(readonly, assign) ATVFeedDocument *resultsFeedDocument;	// G=0x14db91; @synthesize=_resultsFeedDocument
@property(readonly, assign) NSString *searchTerm;	// G=0x14db69; @synthesize=_searchTerm
- (id)initWithSearchTerm:(id)searchTerm baseURLString:(id)string merchant:(id)merchant;	// 0x14d389
- (id)_escapedSearchStringForString:(id)string;	// 0x14d57d
- (void)_loadResultsFromURL:(id)url;	// 0x14d66d
- (void)_setDocument:(id)document;	// 0x14d6fd
- (void)dealloc;	// 0x14d419
- (void)load;	// 0x14d4f9
// declared property getter: - (id)results;	// 0x14db7d
// declared property getter: - (id)resultsFeedDocument;	// 0x14db91
// declared property getter: - (id)searchTerm;	// 0x14db69
@end

