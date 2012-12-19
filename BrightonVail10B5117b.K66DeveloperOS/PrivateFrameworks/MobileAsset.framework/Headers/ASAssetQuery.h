/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSPredicate, NSString;

@interface ASAssetQuery : NSObject {
	NSArray *_results;	// 4 = 0x4
	NSString *_assetType;	// 8 = 0x8
	BOOL _queriesLocalAssetInformationOnly;	// 12 = 0xc
	NSPredicate *_predicate;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *assetType;	// G=0x34774241; S=0x34774255; @synthesize=_assetType
@property(retain, nonatomic) NSPredicate *predicate;	// G=0x34774285; S=0x34774295; @synthesize=_predicate
@property(assign, nonatomic) BOOL queriesLocalAssetInformationOnly;	// G=0x34774265; S=0x34774275; @synthesize=_queriesLocalAssetInformationOnly
@property(retain, nonatomic) NSArray *results;	// G=0x34773f69; S=0x34774231; @synthesize=_results
+ (id)queryPredicateForProperties:(id)properties;	// 0x34773db5
- (id)initWithAssetType:(id)assetType;	// 0x34773ea9
// declared property getter: - (id)assetType;	// 0x34774241
- (void)dealloc;	// 0x34773ef1
// declared property getter: - (id)predicate;	// 0x34774285
// declared property getter: - (BOOL)queriesLocalAssetInformationOnly;	// 0x34774265
// declared property getter: - (id)results;	// 0x34773f69
- (id)runQueryAndReturnError:(id *)error;	// 0x34773fa1
// declared property setter: - (void)setAssetType:(id)type;	// 0x34774255
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x34774295
// declared property setter: - (void)setQueriesLocalAssetInformationOnly:(BOOL)only;	// 0x34774275
// declared property setter: - (void)setResults:(id)results;	// 0x34774231
- (void)startQuery:(id)query;	// 0x3477416d
- (void)stopQuery;	// 0x3477422d
@end
