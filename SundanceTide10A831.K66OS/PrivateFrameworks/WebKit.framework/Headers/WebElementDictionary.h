/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x3506a7e1
+ (void)initializeLookupTable;	// 0x3506a7e5
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x3506aa41
- (id)_absoluteImageURL;	// 0x3506b319
- (id)_absoluteLinkURL;	// 0x3506b731
- (id)_absoluteMediaURL;	// 0x3506b45d
- (id)_altDisplayString;	// 0x3506b045
- (id)_domNode;	// 0x3506aff9
- (void)_fillCache;	// 0x3506ad71
- (id)_image;	// 0x3506b2ed
- (id)_imageRect;	// 0x3506b315
- (id)_isContentEditable;	// 0x3506bb79
- (id)_isInScrollBar;	// 0x3506bbb5
- (id)_isLiveLink;	// 0x3506bb3d
- (id)_isSelected;	// 0x3506b5a1
- (id)_spellingToolTip;	// 0x3506b199
- (id)_targetWebFrame;	// 0x3506b875
- (id)_textContent;	// 0x3506b9e9
- (id)_title;	// 0x3506b5dd
- (id)_titleDisplayString;	// 0x3506b895
- (id)_webFrame;	// 0x3506b00d
- (unsigned)count;	// 0x3506adbd
- (void)dealloc;	// 0x3506ab51
- (void)finalize;	// 0x3506ac91
- (id)keyEnumerator;	// 0x3506ae09
- (id)objectForKey:(id)key;	// 0x3506ae55
@end

