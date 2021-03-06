/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {
@private
	NSArray *_downloadKinds;	// 4 = 0x4
	BOOL _filterExternalOriginatedDownloads;	// 8 = 0x8
	NSString *_persistenceIdentifier;	// 12 = 0xc
	NSArray *_prefetchedDownloadExternalProperties;	// 16 = 0x10
	NSArray *_prefetchedDownloadProperties;	// 20 = 0x14
}
@property(copy, nonatomic) NSArray *downloadKinds;	// G=0x324fcf35; S=0x324fcf45; @synthesize=_downloadKinds
@property(copy, nonatomic) NSString *persistenceIdentifier;	// G=0x324fcf69; S=0x324fcf79; @synthesize=_persistenceIdentifier
@property(copy, nonatomic) NSArray *prefetchedDownloadExternalProperties;	// G=0x324fcf9d; S=0x324fcfad; @synthesize=_prefetchedDownloadExternalProperties
@property(copy, nonatomic) NSArray *prefetchedDownloadProperties;	// G=0x324fcfd1; S=0x324fcfe1; @synthesize=_prefetchedDownloadProperties
@property(assign, nonatomic) BOOL shouldFilterExternalOriginatedDownloads;	// G=0x324fd005; S=0x324fd015; @synthesize=_filterExternalOriginatedDownloads
- (id)copyWithZone:(NSZone *)zone;	// 0x324fcc89
- (void)dealloc;	// 0x324fcc01
// declared property getter: - (id)downloadKinds;	// 0x324fcf35
- (unsigned)hash;	// 0x324fcd6d
- (BOOL)isEqual:(id)equal;	// 0x324fcd8d
// declared property getter: - (id)persistenceIdentifier;	// 0x324fcf69
// declared property getter: - (id)prefetchedDownloadExternalProperties;	// 0x324fcf9d
// declared property getter: - (id)prefetchedDownloadProperties;	// 0x324fcfd1
// declared property setter: - (void)setDownloadKinds:(id)kinds;	// 0x324fcf45
// declared property setter: - (void)setPersistenceIdentifier:(id)identifier;	// 0x324fcf79
// declared property setter: - (void)setPrefetchedDownloadExternalProperties:(id)properties;	// 0x324fcfad
// declared property setter: - (void)setPrefetchedDownloadProperties:(id)properties;	// 0x324fcfe1
// declared property setter: - (void)setShouldFilterExternalOriginatedDownloads:(BOOL)filterExternalOriginatedDownloads;	// 0x324fd015
// declared property getter: - (BOOL)shouldFilterExternalOriginatedDownloads;	// 0x324fd005
@end

