/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, BRMediaType, NSString;

__attribute__((visibility("hidden")))
@interface ATVShowInfoFetchKey : XXUnknownSuperclass {
	NSString *_itemID;	// 4 = 0x4
	NSString *_podcastGUID;	// 8 = 0x8
	NSURL *_podcastURL;	// 12 = 0xc
	BRMediaType *_mediaType;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *itemID;	// G=0x3b5411; S=0x3b5425; @synthesize=_itemID
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x3b5479; S=0x3b5489; @synthesize=_mediaType
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x3b5435; S=0x3b5449; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x3b5459; S=0x3b5469; @synthesize=_podcastURL
+ (id)fetchKeyFromEpisodeDictionary:(id)episodeDictionary;	// 0x3b53dd
- (void)dealloc;	// 0x3b5351
// declared property getter: - (id)itemID;	// 0x3b5411
// declared property getter: - (id)mediaType;	// 0x3b5479
// declared property getter: - (id)podcastGUID;	// 0x3b5435
// declared property getter: - (id)podcastURL;	// 0x3b5459
// declared property setter: - (void)setItemID:(id)anId;	// 0x3b5425
// declared property setter: - (void)setMediaType:(id)type;	// 0x3b5489
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x3b5449
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x3b5469
@end

