/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class SSURLBagContext, SSNetworkConstraints, NSArray, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface ISURLBag : NSObject {
@private
	SSURLBagContext *_context;	// 4 = 0x4
	SSNetworkConstraints *_defaultConstraints;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_guidPatterns;	// 16 = 0x10
	NSSet *_guidSchemes;	// 20 = 0x14
	NSDictionary *_headerPatterns;	// 24 = 0x18
	double _invalidationTime;	// 28 = 0x1c
}
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x33341d9d; S=0x33341d59; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x33341dd5; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x33340e95; 
@property(assign, nonatomic) double invalidationTime;	// G=0x33342a99; S=0x33342ab1; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x33340fb5; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x33341e0d
+ (void)_loadItemKindURLBagKeyMap;	// 0x33340b8d
+ (id)_urlBagForContext:(id)context;	// 0x333409fd
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x3334182d
+ (void)invalidateAllBags;	// 0x333406e9
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x333418c9
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x333407bd
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x33341965
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x33340df5
+ (id)urlBagForContext:(id)context;	// 0x33340abd
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x33341a19
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x33341a8d
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x33341b41
- (id)init;	// 0x3333ff55
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x3333ff9d
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x33340065
// declared property getter: - (id)URLBagContext;	// 0x33341d9d
// declared property getter: - (id)URLBagDictionary;	// 0x33341dd5
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x33341611
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x33341e55
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x33341ff5
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x33342135
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x3334230d
- (id)_networkConstraintsCachePath;	// 0x3334256d
- (void)_setDictionary:(id)dictionary;	// 0x33342619
- (void)_writeNetworkConstraintsCacheFile;	// 0x333426bd
- (void)_writeURLResolutionCacheFile;	// 0x33342875
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x33340e95
- (id)copyExtraHeadersForURL:(id)url;	// 0x33340255
- (void)dealloc;	// 0x333401b9
- (void)invalidate;	// 0x33341bdd
// declared property getter: - (double)invalidationTime;	// 0x33342a99
// declared property getter: - (BOOL)isValid;	// 0x33340fb5
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x33340475
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x33341005
- (id)sanitizedURLForURL:(id)url;	// 0x33341c25
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x333410d5
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x33342ab1
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x33341d59
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x3334130d
- (id)urlForKey:(id)key;	// 0x3334149d
- (BOOL)urlIsTrusted:(id)trusted;	// 0x333414e9
- (id)valueForKey:(id)key;	// 0x3334180d
@end
