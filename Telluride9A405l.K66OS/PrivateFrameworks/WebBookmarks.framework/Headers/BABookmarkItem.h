/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
}
@property(retain, nonatomic) WebBookmark *bookmark;	// G=0x33df1b01; S=0x33df1ba1; @synthesize=_bookmark
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0x33df1b11; @synthesize=_collection
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark;	// 0x33df1b21
// declared property getter: - (id)bookmark;	// 0x33df1b01
// declared property getter: - (id)collection;	// 0x33df1b11
- (void)dealloc;	// 0x33df1bc9
// declared property setter: - (void)setBookmark:(id)bookmark;	// 0x33df1ba1
@end

