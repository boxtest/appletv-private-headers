/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSArray, NSData, NSMutableDictionary, NSString, SSItemContentRating, SSItemImageCollection, NSURL, NSDate, NSNumber, NSDictionary, NSLock;

@interface SSDownloadMetadata : NSObject <NSCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) NSString *applicationIdentifier;	// G=0x324c04d5; 
@property(assign) unsigned long long artistIdentifier;	// G=0x324c0921; S=0x324bf935; 
@property(copy) NSString *artistName;	// G=0x324c0469; S=0x324bf919; 
@property(assign) BOOL artworkIsPrerendered;	// G=0x324c0415; S=0x324bf8d1; 
@property(assign, getter=isAutomaticDownload) BOOL automaticDownload;	// G=0x324beaf5; S=0x324be8d9; 
@property(retain) NSString *bundleIdentifier;	// G=0x324c03a9; S=0x324bf8b5; 
@property(retain) NSURL *cancelDownloadURL;	// G=0x324bed99; S=0x324be8a5; 
@property(copy) NSString *collectionArtistName;	// G=0x324c0341; S=0x324bf899; 
@property(assign) unsigned long long collectionIdentifier;	// G=0x324c08e9; S=0x324bf85d; 
@property(retain) NSNumber *collectionIndexInCollectionGroup;	// G=0x324c02d5; S=0x324bf83d; 
@property(retain) NSString *collectionName;	// G=0x324c0269; S=0x324bf821; 
@property(assign, getter=isCompilation) BOOL compilation;	// G=0x324bfea1; S=0x324bf7e1; 
@property(assign) unsigned long long composerIdentifier;	// G=0x324c08b1; S=0x324bf7a5; 
@property(copy) NSString *composerName;	// G=0x324c0211; S=0x324bf789; 
@property(copy) SSItemContentRating *contentRating;	// G=0x324c0189; S=0x324bf755; 
@property(readonly, assign, getter=isContentRestricted) BOOL contentRestricted;	// G=0x324c0df1; 
@property(retain) NSString *copyright;	// G=0x324bed41; S=0x324be889; 
@property(retain) NSDictionary *dictionary;	// G=0x324bec49; S=0x324be819; 
@property(copy) NSString *documentTargetIdentifier;	// G=0x324c0131; S=0x324bf739; 
@property(retain) NSString *downloadKey;	// G=0x324bebf1; S=0x324be7fd; 
@property(retain) NSNumber *durationInMilliseconds;	// G=0x324c00d9; S=0x324bf71d; 
@property(copy) NSString *episodeIdentifier;	// G=0x324c00a5; S=0x324bf701; 
@property(retain) NSNumber *episodeSortIdentifier;	// G=0x324c003d; S=0x324bf6e5; 
@property(retain) NSData *epubRightsData;	// G=0x324beb99; S=0x324be7e1; 
@property(assign, getter=isExplicitContent) BOOL explicitContent;	// G=0x324bfe55; S=0x324bf6a5; 
@property(retain) NSString *fileExtension;	// G=0x324beb41; S=0x324be7c5; 
@property(retain) NSURL *fullSizeImageURL;	// G=0x324bffd1; S=0x324bf671; 
@property(retain) NSString *genre;	// G=0x324bff59; S=0x324bf655; 
@property(assign) unsigned long long genreIdentifier;	// G=0x324c0879; S=0x324bf619; 
@property(retain) NSNumber *indexInCollection;	// G=0x324bfeed; S=0x324bf5fd; 
@property(assign) unsigned long long itemIdentifier;	// G=0x324c0835; S=0x324bf5c1; 
@property(retain) NSString *kind;	// G=0x324bfd65; S=0x324bf5a5; 
@property(copy) NSString *longDescription;	// G=0x324bfcf9; S=0x324bf589; 
@property(copy) NSString *networkName;	// G=0x324bfca1; S=0x324bf56d; 
@property(retain) NSNumber *numberOfCollectionsInCollectionGroup;	// G=0x324bfc35; S=0x324bf551; 
@property(retain) NSNumber *numberOfItemsInCollection;	// G=0x324bfbc9; S=0x324bf535; 
@property(copy) NSString *podcastEpisodeGUID;	// G=0x324bfb71; S=0x324bf519; 
@property(retain) NSURL *podcastFeedURL;	// G=0x324bfb3d; S=0x324bf4e5; 
@property(copy) NSString *podcastType;	// G=0x324bfae5; S=0x324bf4c9; 
@property(assign) unsigned long long preOrderIdentifier;	// G=0x324bea41; S=0x324be789; 
@property(retain) NSDate *purchaseDate;	// G=0x324bfab1; S=0x324bf4ad; 
@property(assign, getter=isRedownloadDownload) BOOL redownloadDownload;	// G=0x324beaa9; S=0x324be749; 
@property(retain) NSDate *releaseDate;	// G=0x324bfa89; S=0x324bf491; 
@property(retain) NSString *releaseDateString;	// G=0x324be991; S=0x324be72d; 
@property(retain) NSNumber *releaseYear;	// G=0x324bfa31; S=0x324bf475; 
@property(assign, getter=isRental) BOOL rental;	// G=0x324bfe09; S=0x324bf435; 
@property(copy) id requiredDeviceCapabilities;	// G=0x324be919; S=0x324be711; 
@property(assign, getter=isSample) BOOL sample;	// G=0x324bfdbd; S=0x324bf3f5; 
@property(retain) NSNumber *seasonNumber;	// G=0x324bf9d9; S=0x324bf3d9; 
@property(copy) NSString *seriesName;	// G=0x324bf971; S=0x324bf3bd; 
@property(copy) NSString *shortDescription;	// G=0x324bf225; S=0x324bf3a1; 
@property(assign) BOOL shouldDownloadAutomatically;	// G=0x324be505; S=0x324be6d1; 
@property(retain) NSArray *sinfs;	// G=0x324be4ad; S=0x324be6b5; 
@property(retain) NSString *sortArtistName;	// G=0x324bf1bd; S=0x324bf385; 
@property(retain) NSString *sortCollectionName;	// G=0x324bf155; S=0x324bf369; 
@property(retain) NSString *sortTitle;	// G=0x324bf0ed; S=0x324bf34d; 
@property(retain) NSString *subtitle;	// G=0x324bf0d9; S=0x324bf339; 
@property(readonly, assign) SSItemImageCollection *thumbnailImageCollection;	// G=0x324befc1; 
@property(retain) NSURL *thumbnailImageURL;	// G=0x324bef61; S=0x324bf305; 
@property(retain) NSString *title;	// G=0x324beee9; S=0x324bf2e9; 
@property(retain) NSString *transactionIdentifier;	// G=0x324bee91; S=0x324bf2cd; 
@property(copy) NSDictionary *videoDetailsDictionary;	// G=0x324bee39; S=0x324bf2b1; 
@property(retain) NSURL *viewStoreItemURL;	// G=0x324bee05; S=0x324bf27d; 
- (id)init;	// 0x324c073d
- (id)initWithCoder:(id)coder;	// 0x324c0959
- (id)initWithDictionary:(id)dictionary;	// 0x324c07b1
- (id)initWithItem:(id)item;	// 0x324c070d
- (id)initWithItem:(id)item offer:(id)offer;	// 0x324c0cad
- (id)initWithKind:(id)kind;	// 0x324c06dd
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324c0531
- (id)_dateValueForValue:(id)value;	// 0x324be3f5
- (id)_newDateFormatter;	// 0x324be281
- (id)_newImageCollectionWithURLString:(id)urlstring;	// 0x324be309
- (id)_releaseDateValue;	// 0x324be24d
- (void)_setValueCopy:(id)copy forMetadataKey:(id)metadataKey;	// 0x324be20d
- (id)_stringValueForValue:(id)value;	// 0x324be199
- (id)_urlValueForValue:(id)value;	// 0x324be11d
- (id)_valueForFirstAvailableKey:(id)firstAvailableKey;	// 0x324c0e41
// declared property getter: - (id)applicationIdentifier;	// 0x324c04d5
// declared property getter: - (unsigned long long)artistIdentifier;	// 0x324c0921
// declared property getter: - (id)artistName;	// 0x324c0469
// declared property getter: - (BOOL)artworkIsPrerendered;	// 0x324c0415
// declared property getter: - (id)bundleIdentifier;	// 0x324c03a9
// declared property getter: - (id)cancelDownloadURL;	// 0x324bed99
// declared property getter: - (id)collectionArtistName;	// 0x324c0341
// declared property getter: - (unsigned long long)collectionIdentifier;	// 0x324c08e9
// declared property getter: - (id)collectionIndexInCollectionGroup;	// 0x324c02d5
// declared property getter: - (id)collectionName;	// 0x324c0269
// declared property getter: - (unsigned long long)composerIdentifier;	// 0x324c08b1
// declared property getter: - (id)composerName;	// 0x324c0211
// declared property getter: - (id)contentRating;	// 0x324c0189
- (id)copyPropertyListEncoding;	// 0x324c0545
- (id)copyWithZone:(NSZone *)zone;	// 0x324c0565
- (id)copyWritableMetadata;	// 0x324bec79
// declared property getter: - (id)copyright;	// 0x324bed41
- (void)dealloc;	// 0x324c0755
// declared property getter: - (id)dictionary;	// 0x324bec49
// declared property getter: - (id)documentTargetIdentifier;	// 0x324c0131
// declared property getter: - (id)downloadKey;	// 0x324bebf1
// declared property getter: - (id)durationInMilliseconds;	// 0x324c00d9
- (void)encodeWithCoder:(id)coder;	// 0x324c05f1
// declared property getter: - (id)episodeIdentifier;	// 0x324c00a5
// declared property getter: - (id)episodeSortIdentifier;	// 0x324c003d
// declared property getter: - (id)epubRightsData;	// 0x324beb99
// declared property getter: - (id)fileExtension;	// 0x324beb41
// declared property getter: - (id)fullSizeImageURL;	// 0x324bffd1
// declared property getter: - (id)genre;	// 0x324bff59
// declared property getter: - (unsigned long long)genreIdentifier;	// 0x324c0879
// declared property getter: - (id)indexInCollection;	// 0x324bfeed
// declared property getter: - (BOOL)isAutomaticDownload;	// 0x324beaf5
// declared property getter: - (BOOL)isCompilation;	// 0x324bfea1
// declared property getter: - (BOOL)isContentRestricted;	// 0x324c0df1
// declared property getter: - (BOOL)isExplicitContent;	// 0x324bfe55
// declared property getter: - (BOOL)isRedownloadDownload;	// 0x324beaa9
// declared property getter: - (BOOL)isRental;	// 0x324bfe09
// declared property getter: - (BOOL)isSample;	// 0x324bfdbd
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x324c0835
// declared property getter: - (id)kind;	// 0x324bfd65
// declared property getter: - (id)longDescription;	// 0x324bfcf9
// declared property getter: - (id)networkName;	// 0x324bfca1
// declared property getter: - (id)numberOfCollectionsInCollectionGroup;	// 0x324bfc35
// declared property getter: - (id)numberOfItemsInCollection;	// 0x324bfbc9
// declared property getter: - (id)podcastEpisodeGUID;	// 0x324bfb71
// declared property getter: - (id)podcastFeedURL;	// 0x324bfb3d
// declared property getter: - (id)podcastType;	// 0x324bfae5
// declared property getter: - (unsigned long long)preOrderIdentifier;	// 0x324bea41
// declared property getter: - (id)purchaseDate;	// 0x324bfab1
// declared property getter: - (id)releaseDate;	// 0x324bfa89
// declared property getter: - (id)releaseDateString;	// 0x324be991
// declared property getter: - (id)releaseYear;	// 0x324bfa31
// declared property getter: - (id)requiredDeviceCapabilities;	// 0x324be919
// declared property getter: - (id)seasonNumber;	// 0x324bf9d9
// declared property getter: - (id)seriesName;	// 0x324bf971
// declared property setter: - (void)setArtistIdentifier:(unsigned long long)identifier;	// 0x324bf935
// declared property setter: - (void)setArtistName:(id)name;	// 0x324bf919
// declared property setter: - (void)setArtworkIsPrerendered:(BOOL)prerendered;	// 0x324bf8d1
// declared property setter: - (void)setAutomaticDownload:(BOOL)download;	// 0x324be8d9
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x324bf8b5
// declared property setter: - (void)setCancelDownloadURL:(id)url;	// 0x324be8a5
// declared property setter: - (void)setCollectionArtistName:(id)name;	// 0x324bf899
// declared property setter: - (void)setCollectionIdentifier:(unsigned long long)identifier;	// 0x324bf85d
// declared property setter: - (void)setCollectionIndexInCollectionGroup:(id)collectionGroup;	// 0x324bf83d
// declared property setter: - (void)setCollectionName:(id)name;	// 0x324bf821
// declared property setter: - (void)setCompilation:(BOOL)compilation;	// 0x324bf7e1
// declared property setter: - (void)setComposerIdentifier:(unsigned long long)identifier;	// 0x324bf7a5
// declared property setter: - (void)setComposerName:(id)name;	// 0x324bf789
// declared property setter: - (void)setContentRating:(id)rating;	// 0x324bf755
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x324be889
// declared property setter: - (void)setDictionary:(id)dictionary;	// 0x324be819
// declared property setter: - (void)setDocumentTargetIdentifier:(id)identifier;	// 0x324bf739
// declared property setter: - (void)setDownloadKey:(id)key;	// 0x324be7fd
// declared property setter: - (void)setDurationInMilliseconds:(id)milliseconds;	// 0x324bf71d
// declared property setter: - (void)setEpisodeIdentifier:(id)identifier;	// 0x324bf701
// declared property setter: - (void)setEpisodeSortIdentifier:(id)identifier;	// 0x324bf6e5
// declared property setter: - (void)setEpubRightsData:(id)data;	// 0x324be7e1
// declared property setter: - (void)setExplicitContent:(BOOL)content;	// 0x324bf6a5
// declared property setter: - (void)setFileExtension:(id)extension;	// 0x324be7c5
// declared property setter: - (void)setFullSizeImageURL:(id)url;	// 0x324bf671
// declared property setter: - (void)setGenre:(id)genre;	// 0x324bf655
// declared property setter: - (void)setGenreIdentifier:(unsigned long long)identifier;	// 0x324bf619
// declared property setter: - (void)setIndexInCollection:(id)collection;	// 0x324bf5fd
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x324bf5c1
// declared property setter: - (void)setKind:(id)kind;	// 0x324bf5a5
// declared property setter: - (void)setLongDescription:(id)description;	// 0x324bf589
// declared property setter: - (void)setNetworkName:(id)name;	// 0x324bf56d
// declared property setter: - (void)setNumberOfCollectionsInCollectionGroup:(id)collectionGroup;	// 0x324bf551
// declared property setter: - (void)setNumberOfItemsInCollection:(id)collection;	// 0x324bf535
// declared property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x324bf519
// declared property setter: - (void)setPodcastFeedURL:(id)url;	// 0x324bf4e5
// declared property setter: - (void)setPodcastType:(id)type;	// 0x324bf4c9
// declared property setter: - (void)setPreOrderIdentifier:(unsigned long long)identifier;	// 0x324be789
// declared property setter: - (void)setPurchaseDate:(id)date;	// 0x324bf4ad
// declared property setter: - (void)setRedownloadDownload:(BOOL)download;	// 0x324be749
// declared property setter: - (void)setReleaseDate:(id)date;	// 0x324bf491
// declared property setter: - (void)setReleaseDateString:(id)string;	// 0x324be72d
// declared property setter: - (void)setReleaseYear:(id)year;	// 0x324bf475
// declared property setter: - (void)setRental:(BOOL)rental;	// 0x324bf435
// declared property setter: - (void)setRequiredDeviceCapabilities:(id)capabilities;	// 0x324be711
// declared property setter: - (void)setSample:(BOOL)sample;	// 0x324bf3f5
// declared property setter: - (void)setSeasonNumber:(id)number;	// 0x324bf3d9
// declared property setter: - (void)setSeriesName:(id)name;	// 0x324bf3bd
// declared property setter: - (void)setShortDescription:(id)description;	// 0x324bf3a1
// declared property setter: - (void)setShouldDownloadAutomatically:(BOOL)downloadAutomatically;	// 0x324be6d1
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x324be6b5
// declared property setter: - (void)setSortArtistName:(id)name;	// 0x324bf385
// declared property setter: - (void)setSortCollectionName:(id)name;	// 0x324bf369
// declared property setter: - (void)setSortTitle:(id)title;	// 0x324bf34d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x324bf339
// declared property setter: - (void)setThumbnailImageURL:(id)url;	// 0x324bf305
// declared property setter: - (void)setTitle:(id)title;	// 0x324bf2e9
// declared property setter: - (void)setTransactionIdentifier:(id)identifier;	// 0x324bf2cd
- (void)setValue:(id)value forMetadataKey:(id)metadataKey;	// 0x324be551
// declared property setter: - (void)setVideoDetailsDictionary:(id)dictionary;	// 0x324bf2b1
// declared property setter: - (void)setViewStoreItemURL:(id)url;	// 0x324bf27d
// declared property getter: - (id)shortDescription;	// 0x324bf225
// declared property getter: - (BOOL)shouldDownloadAutomatically;	// 0x324be505
// declared property getter: - (id)sinfs;	// 0x324be4ad
// declared property getter: - (id)sortArtistName;	// 0x324bf1bd
// declared property getter: - (id)sortCollectionName;	// 0x324bf155
// declared property getter: - (id)sortTitle;	// 0x324bf0ed
// declared property getter: - (id)subtitle;	// 0x324bf0d9
// declared property getter: - (id)thumbnailImageCollection;	// 0x324befc1
// declared property getter: - (id)thumbnailImageURL;	// 0x324bef61
// declared property getter: - (id)title;	// 0x324beee9
// declared property getter: - (id)transactionIdentifier;	// 0x324bee91
- (id)valueForMetadataKey:(id)metadataKey;	// 0x324be495
// declared property getter: - (id)videoDetailsDictionary;	// 0x324bee39
// declared property getter: - (id)viewStoreItemURL;	// 0x324bee05
@end
