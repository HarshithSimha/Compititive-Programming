def bouncing_ball(h, bounce, window):
    if h > 0 and bounce > 0 and bounce < 1 and window < h:
        count=1
        h=h*bounce
        while h > window:
            count+=2
            h=h*bounce
        return count
    else:
        return -1
