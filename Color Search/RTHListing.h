//
//  RTHListing.h
//  Color Search
//
//  Created by Robert Tolar Haining on 2/2/13.
//  Copyright (c) 2013 Robert Tolar Haining. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RTHCategory;

@interface RTHListing : NSObject

@property (nonatomic, strong) NSURL *imageURL;
@property (nonatomic, strong) NSURL *largeImageURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *listingId;
@property (nonatomic, copy) NSURL *etsyWebURL;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *itemDescription;
@property (nonatomic, copy) NSString *shopURL;
@property (nonatomic, copy) NSString *shopName;
@property (nonatomic, readonly) NSURL *etsyAppURL;

+ (void)listingsForHexColor:(NSString *)hexColor category:(RTHCategory *)category keyword:(NSString *)keyword minimumPrice:(NSInteger)minimumPrice maximumPrice:(NSInteger)maximumPrice offset:(NSInteger)offset withBlock:(void (^)(NSArray *posts, NSInteger nextSearchOffset, NSError *error))block ;
//- (void)imageWithBlock:(void (^)(NSURL *imageURL, NSError *error))block;

@end
