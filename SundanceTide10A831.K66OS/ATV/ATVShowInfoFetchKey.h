/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaType, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface ATVShowInfoFetchKey : XXUnknownSuperclass {
	NSString *_itemID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSString *_podcastGUID;	// 12 = 0xc
	NSURL *_podcastURL;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *itemID;	// G=0x3aea31; S=0x3aea45; @synthesize=_itemID
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x3aea55; S=0x3aea65; @synthesize=_mediaType
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x3aea75; S=0x3aea89; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x3aea99; S=0x3aeaa9; @synthesize=_podcastURL
+ (id)fetchKeyFromEpisodeDictionary:(id)episodeDictionary;	// 0x3ae9fd
- (void)dealloc;	// 0x3ae971
// declared property getter: - (id)itemID;	// 0x3aea31
// declared property getter: - (id)mediaType;	// 0x3aea55
// declared property getter: - (id)podcastGUID;	// 0x3aea75
// declared property getter: - (id)podcastURL;	// 0x3aea99
// declared property setter: - (void)setItemID:(id)anId;	// 0x3aea45
// declared property setter: - (void)setMediaType:(id)type;	// 0x3aea65
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x3aea89
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x3aeaa9
@end

