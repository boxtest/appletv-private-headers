/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTFeedDocumentSpec.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionsDocumentSpec : XXUnknownSuperclass <RUIYTFeedDocumentSpec> {
	NSString *_title;	// 4 = 0x4
	int _type;	// 8 = 0x8
	BOOL _requiresAccessToken;	// 12 = 0xc
	double _refreshInterval;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x273431; 
@property(readonly, assign, nonatomic) NSString *moreNRemainingSubTitle;	// G=0x2735d5; 
@property(readonly, assign, nonatomic) NSString *moreNToMTitle;	// G=0x2734d9; 
@property(readonly, assign, nonatomic) NSString *moreNTotalSubTitle;	// G=0x273581; 
@property(readonly, assign, nonatomic) NSString *moreSingleRemainingSubTitle;	// G=0x27352d; 
@property(readonly, assign, nonatomic) NSString *moreSingleTitle;	// G=0x273485; 
@property(readonly, assign, nonatomic) NSString *noContentErrorMessage;	// G=0x273629; 
@property(assign, nonatomic) double refreshInterval;	// G=0x2738cd; S=0x2738e5; @synthesize=_refreshInterval
@property(assign, nonatomic) BOOL requiresAccessToken;	// G=0x2738ad; S=0x2738bd; @synthesize=_requiresAccessToken
@property(retain, nonatomic) NSString *title;	// G=0x273849; S=0x273859; @synthesize=_title
@property(assign) int type;	// G=0x273881; S=0x273895; @synthesize=_type
+ (id)collectionsDocumentSpecForType:(int)type;	// 0x273299
+ (id)playlistSearchDocumentSpecWithSearchTerm:(id)searchTerm;	// 0x273369
- (void).cxx_destruct;	// 0x2738f9
- (id)collectionsDocument;	// 0x27367d
// declared property getter: - (id)identifier;	// 0x273431
// declared property getter: - (id)moreNRemainingSubTitle;	// 0x2735d5
// declared property getter: - (id)moreNToMTitle;	// 0x2734d9
// declared property getter: - (id)moreNTotalSubTitle;	// 0x273581
// declared property getter: - (id)moreSingleRemainingSubTitle;	// 0x27352d
// declared property getter: - (id)moreSingleTitle;	// 0x273485
// declared property getter: - (id)noContentErrorMessage;	// 0x273629
// declared property getter: - (double)refreshInterval;	// 0x2738cd
// declared property getter: - (BOOL)requiresAccessToken;	// 0x2738ad
// declared property setter: - (void)setRefreshInterval:(double)interval;	// 0x2738e5
// declared property setter: - (void)setRequiresAccessToken:(BOOL)token;	// 0x2738bd
// declared property setter: - (void)setTitle:(id)title;	// 0x273859
// declared property setter: - (void)setType:(int)type;	// 0x273895
// declared property getter: - (id)title;	// 0x273849
// declared property getter: - (int)type;	// 0x273881
- (id)videosDocumentSpecForCollection:(id)collection;	// 0x2736b9
@end

