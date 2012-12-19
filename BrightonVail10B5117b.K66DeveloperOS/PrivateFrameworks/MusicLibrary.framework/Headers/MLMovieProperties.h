/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray, NSString;

@interface MLMovieProperties : NSObject <NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *castMembers;	// G=0x348c8329; S=0x348c83f1; 
@property(copy, nonatomic) NSString *copyrightWarning;	// G=0x348c8351; S=0x348c840d; 
@property(copy, nonatomic) NSArray *directors;	// G=0x348c8379; S=0x348c8429; 
@property(copy, nonatomic) NSArray *producers;	// G=0x348c83a1; S=0x348c8445; 
@property(copy, nonatomic) NSArray *screenwriters;	// G=0x348c83c9; S=0x348c8461; 
@property(copy, nonatomic) NSString *studioName;	// G=0x348c8499; S=0x348c847d; 
- (id)init;	// 0x348c821d
- (id)initWithMoviePropertiesDictionary:(id)moviePropertiesDictionary;	// 0x348c8245
- (void).cxx_destruct;	// 0x348c8599
- (void)_setValue:(id)value forKey:(id)key;	// 0x348c84e1
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x348c8535
// declared property getter: - (id)castMembers;	// 0x348c8329
- (id)copyMoviePropertiesDictionary;	// 0x348c84c1
- (id)copyWithZone:(NSZone *)zone;	// 0x348c82dd
// declared property getter: - (id)copyrightWarning;	// 0x348c8351
// declared property getter: - (id)directors;	// 0x348c8379
// declared property getter: - (id)producers;	// 0x348c83a1
// declared property getter: - (id)screenwriters;	// 0x348c83c9
// declared property setter: - (void)setCastMembers:(id)members;	// 0x348c83f1
// declared property setter: - (void)setCopyrightWarning:(id)warning;	// 0x348c840d
// declared property setter: - (void)setDirectors:(id)directors;	// 0x348c8429
// declared property setter: - (void)setProducers:(id)producers;	// 0x348c8445
// declared property setter: - (void)setScreenwriters:(id)screenwriters;	// 0x348c8461
// declared property setter: - (void)setStudioName:(id)name;	// 0x348c847d
// declared property getter: - (id)studioName;	// 0x348c8499
@end
