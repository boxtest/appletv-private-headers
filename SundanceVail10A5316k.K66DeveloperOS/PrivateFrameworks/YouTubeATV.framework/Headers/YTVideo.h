/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YouTubeATV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSCalendarDate, NSArray, NSURL;

@interface YTVideo : NSObject {
	NSString *_id;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_author;	// 12 = 0xc
	NSCalendarDate *_dateUpdated;	// 16 = 0x10
	NSCalendarDate *_dateAdded;	// 20 = 0x14
	NSArray *_videoReferences;	// 24 = 0x18
	NSString *_notificationName;	// 28 = 0x1c
	NSString *_videoDescription;	// 32 = 0x20
	NSString *_category;	// 36 = 0x24
	NSArray *_tags;	// 40 = 0x28
	unsigned _numberOfViews;	// 44 = 0x2c
	unsigned _numLikes;	// 48 = 0x30
	unsigned _numDislikes;	// 52 = 0x34
	int _batchStatus;	// 56 = 0x38
	NSURL *_infoURL;	// 60 = 0x3c
	NSURL *_thumbnailURL;	// 64 = 0x40
	NSURL *_commentsURL;	// 68 = 0x44
	NSURL *_editURL;	// 72 = 0x48
	NSURL *_ratingsURL;	// 76 = 0x4c
	NSURL *_captionsURL;	// 80 = 0x50
	NSString *_shortID;	// 84 = 0x54
	NSString *_unplayable;	// 88 = 0x58
	BOOL _isProcessing;	// 92 = 0x5c
	NSMutableArray *_captions;	// 96 = 0x60
	int _privacy;	// 100 = 0x64
	NSString *_restrictedCountries;	// 104 = 0x68
	id _thumbnailProxyBlock;	// 108 = 0x6c
}
@property(readonly, retain) NSString *author;	// G=0x35e68a35; converted property
@property(readonly, assign) int batchStatus;	// G=0x35e68d39; converted property
@property(readonly, retain) NSMutableArray *captions;	// G=0x35e6911d; converted property
@property(readonly, retain) NSURL *captionsURL;	// G=0x35e68b09; converted property
@property(readonly, retain) NSString *category;	// G=0x35e68b49; converted property
@property(readonly, retain) NSURL *commentsURL;	// G=0x35e68ad9; converted property
@property(readonly, retain) NSCalendarDate *dateAdded;	// G=0x35e68a55; converted property
@property(readonly, retain) NSCalendarDate *dateUpdated;	// G=0x35e68a45; converted property
@property(readonly, retain) NSURL *editURL;	// G=0x35e68ae9; converted property
@property(readonly, retain) NSURL *infoURL;	// G=0x35e68b19; converted property
@property(readonly, assign) BOOL isProcessing;	// G=0x35e6910d; converted property
@property(readonly, assign) unsigned numDislikes;	// G=0x35e68c21; converted property
@property(readonly, assign) unsigned numLikes;	// G=0x35e68c11; converted property
@property(readonly, assign) unsigned numberOfViews;	// G=0x35e68d19; converted property
@property(readonly, retain) NSURL *ratingsURL;	// G=0x35e68af9; converted property
@property(readonly, retain) NSString *restrictedCountries;	// G=0x35e68d29; converted property
@property(readonly, retain) NSString *shortID;	// G=0x35e689d1; converted property
@property(readonly, retain) NSArray *tags;	// G=0x35e68b59; converted property
@property(readonly, retain) NSURL *thumbnailURL;	// G=0x35e68b29; converted property
@property(readonly, retain) NSString *title;	// G=0x35e68a05; converted property
@property(readonly, retain) NSString *unplayable;	// G=0x35e68b91; converted property
@property(readonly, retain) NSString *videoDescription;	// G=0x35e68b39; converted property
+ (void)disableNotifications;	// 0x35e67839
+ (void)enableNotifications;	// 0x35e6784d
+ (id)unsupportedVideoError;	// 0x35e67861
+ (id)videoIsProcessingError;	// 0x35e678f1
+ (id)videoNotFoundError;	// 0x35e678a9
- (id)initFromArchiveDictionary:(id)archiveDictionary;	// 0x35e67a31
- (id)initWithID:(id)anId title:(id)title dateUpdated:(id)updated dateAdded:(id)added videoReferences:(id)references infoURL:(id)url videoDescription:(id)description category:(id)category tags:(id)tags author:(id)author thumbnailURL:(id)url11 numLikes:(unsigned)likes numDislikes:(unsigned)dislikes numberOfViews:(unsigned)views batchStatus:(int)status commentsURL:(id)url16 editURL:(id)url17 ratingsURL:(id)url18 captionsURL:(id)url19 shortID:(id)anId20 unplayable:(id)unplayable isProcessing:(BOOL)processing privacy:(int)privacy restrictedCountries:(id)countries;	// 0x35e68385
- (id)ID;	// 0x35e689c1
- (void)_postVideoDidChange;	// 0x35e682cd
- (void)_thumbnailDidLoad;	// 0x35e68325
- (double)age;	// 0x35e68ba1
- (BOOL)allowsHighQuality3GPlayback;	// 0x35e68fa1
- (id)anyVideoReference;	// 0x35e69001
- (id)archiveDictionary;	// 0x35e67e49
// converted property getter: - (id)author;	// 0x35e68a35
// converted property getter: - (int)batchStatus;	// 0x35e68d39
- (id)bestVideoReference;	// 0x35e68fb5
// converted property getter: - (id)captions;	// 0x35e6911d
// converted property getter: - (id)captionsURL;	// 0x35e68b09
- (void)carrierBundleDidChangeNotification:(id)carrierBundle;	// 0x35e68fa5
// converted property getter: - (id)category;	// 0x35e68b49
// converted property getter: - (id)commentsURL;	// 0x35e68ad9
// converted property getter: - (id)dateAdded;	// 0x35e68a55
- (id)dateAddedString;	// 0x35e68a65
// converted property getter: - (id)dateUpdated;	// 0x35e68a45
- (void)dealloc;	// 0x35e686d5
- (id)description;	// 0x35e68921
// converted property getter: - (id)editURL;	// 0x35e68ae9
- (unsigned)hash;	// 0x35e679e1
// converted property getter: - (id)infoURL;	// 0x35e68b19
- (BOOL)isBookmarked;	// 0x35e69011
- (BOOL)isEqual:(id)equal;	// 0x35e67939
- (BOOL)isPlayable;	// 0x35e690c5
// converted property getter: - (BOOL)isProcessing;	// 0x35e6910d
- (CGImageRef)largeThumbnailLoadIfAbsent:(BOOL)absent;	// 0x35e68e01
- (void)loadThumbnailWithCallback:(id)callback;	// 0x35e68eb1
// converted property getter: - (unsigned)numDislikes;	// 0x35e68c21
// converted property getter: - (unsigned)numLikes;	// 0x35e68c11
// converted property getter: - (unsigned)numberOfViews;	// 0x35e68d19
- (BOOL)ownVideo;	// 0x35e69195
- (CGImageRef)pluginThumbnailLoadIfAbsent:(BOOL)absent;	// 0x35e68e59
- (BOOL)positiveRating;	// 0x35e68c31
- (id)privacyString;	// 0x35e69121
- (id)ratingPercentageString;	// 0x35e68c59
// converted property getter: - (id)ratingsURL;	// 0x35e68af9
// converted property getter: - (id)restrictedCountries;	// 0x35e68d29
- (CGImageRef)roundedThumbnailLoadIfAbsent:(BOOL)absent;	// 0x35e68da5
// converted property getter: - (id)shortID;	// 0x35e689d1
// converted property getter: - (id)tags;	// 0x35e68b59
- (id)tagsString;	// 0x35e68b69
- (CGImageRef)thumbnailLoadIfAbsent:(BOOL)absent;	// 0x35e68d49
// converted property getter: - (id)thumbnailURL;	// 0x35e68b29
// converted property getter: - (id)title;	// 0x35e68a05
// converted property getter: - (id)unplayable;	// 0x35e68b91
// converted property getter: - (id)videoDescription;	// 0x35e68b39
- (id)videoReferenceForProfile:(int)profile;	// 0x35e68f25
@end
