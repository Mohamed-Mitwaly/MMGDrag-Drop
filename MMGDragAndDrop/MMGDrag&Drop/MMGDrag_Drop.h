//
//  MMGImageDrag_Drop.h
//  MOVEME
//
//  Created by Mohamed Mitwaly on 7/20/14.
//  Copyright (c) 2014 Tawasol. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MMGDrag_Drop : NSObject<UIGestureRecognizerDelegate>
+(MMGDrag_Drop*)getInstance; //to get object from the class
-(int)arrayOfViewsToBeDragged_DropAndZoom:(NSArray*)viewsArray onView:(UIView*)mainView;
//return --> 1 in case of success
//       --> 0 in case of array = nil
//       --> 2 in case of mainView = nil
@end
