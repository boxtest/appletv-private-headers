/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <CoreDAVResourceTypeItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CoreDAVResourceTypeItem (BookmarkDAVExtensions)
@property(retain) CoreDAVItemWithNoChildren *bookmarkBarFolder;	// G=0x32d22a51; S=0x32d229ad; 
@property(retain) CoreDAVItemWithNoChildren *bookmarkFolder;	// G=0x32d22a7d; S=0x32d229e9; 
@property(retain) CoreDAVItemWithNoChildren *bookmarkMenuFolder;	// G=0x32d22a25; S=0x32d22971; 
// declared property getter: - (id)bookmarkBarFolder;	// 0x32d22a51
// declared property getter: - (id)bookmarkFolder;	// 0x32d22a7d
// declared property getter: - (id)bookmarkMenuFolder;	// 0x32d22a25
- (id)extraChildWithNameSpace:(id)nameSpace name:(id)name;	// 0x32d22b95
// declared property setter: - (void)setBookmarkBarFolder:(id)folder;	// 0x32d229ad
// declared property setter: - (void)setBookmarkFolder:(id)folder;	// 0x32d229e9
// declared property setter: - (void)setBookmarkMenuFolder:(id)folder;	// 0x32d22971
- (void)setExtraChild:(id)child forNameSpace:(id)nameSpace name:(id)name;	// 0x32d22aa9
@end
