/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIURLResolver : NSObject {
}
+ (void)invalidate;	// 0x30253825
+ (id)sharedResolver;	// 0x301757fd
+ (id)urlCacheChangedNotificationName;	// 0x302535ad
+ (id)urlCacheName;	// 0x302535a9
- (id)init;	// 0x302538f1
- (id)initWithDictionary:(id)dictionary;	// 0x30175dbd
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x30253991
- (BOOL)_url:(id)url matchesHostPatterns:(id)patterns pathPatterns:(id)patterns3;	// 0x30253a91
- (BOOL)_url:(id)url matchesHostWhitelist:(id)whitelist;	// 0x30253b49
- (void)dealloc;	// 0x3025392d
@end
