/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmark, WebBookmarkCollection;

__attribute__((visibility("hidden")))
@interface BAChangeRecord : NSObject {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
	int _changeType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) WebBookmark *bookmark;	// G=0x369d3ded; @synthesize=_bookmark
@property(readonly, assign, nonatomic) int changeType;	// G=0x369d3dfd; @synthesize=_changeType
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0x369d3ddd; @synthesize=_collection
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark changeType:(int)type;	// 0x369d3c51
// declared property getter: - (id)bookmark;	// 0x369d3ded
// declared property getter: - (int)changeType;	// 0x369d3dfd
- (id)changeTypeDescription;	// 0x369d3d41
// declared property getter: - (id)collection;	// 0x369d3ddd
- (void)dealloc;	// 0x369d3cdd
- (id)description;	// 0x369d3d85
@end

