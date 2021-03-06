/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {
	NSSet *_searchItems;	// 112 = 0x70
	BOOL _applyToPrincipalCollectionSet;	// 116 = 0x74
	NSDictionary *_extraAttributes;	// 120 = 0x78
}
@property(assign) BOOL applyToPrincipalCollectionSet;	// G=0x3319ddbd; S=0x3319ddcd; @synthesize=_applyToPrincipalCollectionSet
@property(retain) NSDictionary *extraAttributes;	// G=0x3319e195; S=0x3319e1d9; @synthesize=_extraAttributes
@property(retain) NSSet *searchItems;	// G=0x3319e17d; S=0x3319e1ad; @synthesize=_searchItems
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x3319de79
- (id)initWithPropertySearches:(id)propertySearches propertiesToFind:(id)find atURL:(id)url applyToPrincipalCollectionSet:(BOOL)principalCollectionSet extraAttributes:(id)attributes;	// 0x3319dddd
// declared property getter: - (BOOL)applyToPrincipalCollectionSet;	// 0x3319ddbd
- (void)dealloc;	// 0x3319deb9
// declared property getter: - (id)extraAttributes;	// 0x3319e195
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3319de35
- (id)httpMethod;	// 0x3319ddb1
- (id)requestBody;	// 0x3319df15
// declared property getter: - (id)searchItems;	// 0x3319e17d
// declared property setter: - (void)setApplyToPrincipalCollectionSet:(BOOL)principalCollectionSet;	// 0x3319ddcd
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x3319e1d9
// declared property setter: - (void)setSearchItems:(id)items;	// 0x3319e1ad
@end

